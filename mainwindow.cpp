#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clickablelabel.h"
#include "admin.h"
#include "customer.h"
#include "QMessageBox"
#include "accountutils.h"
#include "debitaccount.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    Admin::loadFromFile(adminHead);
    Customer::loadFromFile(customerHead);
    loadAccountsFromFile(customerHead);


    ui->setupUi(this);
    currentRole="";
    connect(ui->customerBtn, &QPushButton::clicked, this, [=]() {
        currentRole = "Customer";
        ui->loginHeaderLabel->setText("Enter username and password as Customer");
        ui->stackedWidget->setCurrentIndex(2);
    });

    connect(ui->adminBtn, &QPushButton::clicked, this, [=]() {
        currentRole = "Admin";
        ui->loginHeaderLabel->setText("Enter username and password as Admin");

        ui->stackedWidget->setCurrentIndex(2);
    });

    connect(ui->signupLabel, &ClickableLabel::clicked, this, [this]() {
        ui->stackedWidget->setCurrentIndex(3);
    });
}

MainWindow::~MainWindow()
{
    Admin::saveToFile(adminHead);
    Customer::saveToFile(customerHead);

    delete ui;
}

void MainWindow::on_backBtn_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}





void MainWindow::on_backBtn_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}




void MainWindow::on_backBtn_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_backBtn_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}





void MainWindow::on_loginBtn_clicked()
{
    QString username = ui->usernameLoginLineEdit->text();
    QString password = ui->passwordloginLineEdit->text();
    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Login Error", "Please enter both username and password.");
        return;
    }

    if (currentRole == "Admin") {
        Admin temp;
        if (temp.login(username, password, adminHead)) {
            ui->stackedWidget->setCurrentIndex(4);
        } else {
            QMessageBox::warning(this, "Login Failed", "Incorrect username or password");
        }

    }
    else if (currentRole == "Customer") {

        Customer temp;
        if (temp.login(username, password, customerHead)) {
            ui->stackedWidget->setCurrentIndex(1); // Customer menu page
        } else {
            QMessageBox::warning(this, "Login Failed", "Incorrect username or password");
        }
    }
}


void MainWindow::on_signupBtn_clicked()
{
    QString name = ui->nameLineEdit->text().trimmed();
    QString lastname = ui->lastNameLineEdit->text().trimmed();
    QString id=ui->idLineEdit->text().trimmed();
    int age=ui->ageSpinBox->value();
    QString username=ui->userNameLineEdit->text().trimmed();
    QString password=ui->passwordLineEdit->text().trimmed();

    if (name.isEmpty() || lastname.isEmpty() || id.isEmpty() ||username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Signup Error", "Please fill in all fields before signing up.");
        return;
    }

    Admin::signup(name,lastname,id,age,username,password,adminHead);





}


void MainWindow::on_backBtn_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_addCustomersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


void MainWindow::on_signupCustomerBtn_clicked()
{
    QString name = ui->nameCustomerLineEdit->text();
    QString lastName = ui->lastNameCustomerLineEdit->text();
    QString id = ui->idCustomerLineEdit->text();
    int age = ui->ageCustomerSpinBox->value();
    QString username = ui->usernameCustomerLineEdit->text();
    QString password = ui->passwordCustomerLineEdit->text();

    if (name.isEmpty() || lastName.isEmpty() || id.isEmpty() ||username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields.");
        return;
    }



    // Call the signup function
    Customer::signup(name, lastName, id, age, username, password, customerHead);
}




void MainWindow::on_addAccountBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}


void MainWindow::on_backBtn_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_backBtn_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
}

void MainWindow::handleAddAccountForCustomer() {
    QString targetUsername = ui->Uname->text().trimmed();

    Customer* targetCustomer = nullptr;
    UserNode* current = customerHead;
    while (current) {
        Customer* c = dynamic_cast<Customer*>(current->data);
        if (c && c->getUsername() == targetUsername) {
            targetCustomer = c;
            break;
        }
        current = current->next;
    }

    if (!targetCustomer) {
        QMessageBox::warning(this, "Error", "Customer not found.");
        return;
    }

    int expireMonth = ui->exppireMonthNum->value();
    int expireYear = ui->expireYearNum->value();
    int cvv = ui->cvv2Num->text().trimmed().toInt();
    float balance = ui->balanceNum->text().trimmed().toInt();

    int cardNum = ui->cardNum->text().trimmed().toInt();
    int shabaNum = ui->shabaNum->text().trimmed().toInt();
    int accountNum = ui->accountNum->text().trimmed().toInt(); // make sure you have this field

    QString password = ui->passwordNum->text().trimmed();
    QString secondPassword = ui->secondPasswordNum->text().trimmed(); // assuming you have this input

    DebitAccount* newAcc = new DebitAccount(cardNum, shabaNum, accountNum, cvv, balance, expireYear, expireMonth, password, secondPassword);

    Admin dummyAdmin;
    dummyAdmin.addAccountForCustomer(targetCustomer, newAcc);

    saveAccountToFile(targetCustomer->getUsername(), "debit", newAcc);

    QMessageBox::information(this, "Success", "Account added successfully.");
}


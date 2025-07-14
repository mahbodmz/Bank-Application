#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clickablelabel.h"
#include "admin.h"
#include "customer.h"
#include "QMessageBox"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    Admin::loadFromFile(adminHead);
    Customer::loadFromFile(customerHead);

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
        ui->stackedWidget->setCurrentIndex(1); // Customer menu page
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


void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}


void MainWindow::on_addCustomersBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(5);
}


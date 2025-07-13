#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clickablelabel.h"
#include "admin.h"
#include "customer.h"
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
    if (currentRole == "Admin") {
        ui->stackedWidget->setCurrentIndex(4); // Admin menu page
    } else if (currentRole == "Customer") {
        ui->stackedWidget->setCurrentIndex(1); // Customer menu page
    }
}


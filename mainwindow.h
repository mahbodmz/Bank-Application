#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "usernode.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void handleAddAccountForCustomer();

    void on_backBtn_1_clicked();



    void on_backBtn_2_clicked();



    void on_backBtn_3_clicked();

    void on_backBtn_5_clicked();



    void on_loginBtn_clicked();

    void on_signupBtn_clicked();

    void on_backBtn_6_clicked();

    void on_addCustomersBtn_clicked();

    void on_signupCustomerBtn_clicked();



    void on_addAccountBtn_clicked();

    void on_backBtn_7_clicked();

    void on_backBtn_8_clicked();

    void on_debitBtn_clicked();

    void on_confirmBtn_clicked();

private:
    UserNode* adminHead = nullptr;
    UserNode* customerHead = nullptr;
    Ui::MainWindow *ui;
    QString currentRole;
    QString cardType=nullptr;
};
#endif // MAINWINDOW_H

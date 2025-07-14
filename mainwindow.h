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
    void on_backBtn_1_clicked();



    void on_backBtn_2_clicked();



    void on_backBtn_3_clicked();

    void on_backBtn_5_clicked();



    void on_loginBtn_clicked();

    void on_signupBtn_clicked();

    void on_pushButton_clicked();

    void on_addCustomersBtn_clicked();

    void on_signupCustomerBtn_clicked();

private:
    UserNode* adminHead = nullptr;
    UserNode* customerHead = nullptr;
    Ui::MainWindow *ui;
    QString currentRole;
};
#endif // MAINWINDOW_H

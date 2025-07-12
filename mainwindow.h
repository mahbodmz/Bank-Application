#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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

private:
    Ui::MainWindow *ui;
    QString currentRole;
};
#endif // MAINWINDOW_H

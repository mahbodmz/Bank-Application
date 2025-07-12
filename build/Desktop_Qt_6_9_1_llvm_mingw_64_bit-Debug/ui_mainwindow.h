/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "clickablelabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page_0;
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *WelcomeHeader;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *customerBtn;
    QSpacerItem *horizontalSpacer;
    QPushButton *adminBtn;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    ClickableLabel *signupLabel;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *verticalSpacer;
    QWidget *page_1;
    QGridLayout *gridLayout_6;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *backBtn_3;
    QSpacerItem *horizontalSpacer_22;
    QLabel *label;
    QSpacerItem *verticalSpacer_9;
    QWidget *widget_9;
    QGridLayout *gridLayout_7;
    QPushButton *viewAccountsBtn;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *secondPassBtn;
    QPushButton *firstPassBtn;
    QPushButton *depositBtn;
    QSpacerItem *horizontalSpacer_16;
    QSpacerItem *horizontalSpacer_18;
    QSpacerItem *horizontalSpacer_19;
    QSpacerItem *horizontalSpacer_20;
    QSpacerItem *horizontalSpacer_21;
    QSpacerItem *verticalSpacer_8;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *backBtn_1;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_5;
    QLabel *loginHeaderLabel;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *usernameLine;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *passwordLine;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *loginBtn;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QGridLayout *gridLayout_4;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *backBtn_2;
    QSpacerItem *horizontalSpacer_13;
    QLabel *infoHeaderLabel;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_6;
    QWidget *widget_8;
    QGridLayout *gridLayout_5;
    QSpinBox *ageSpinBox;
    QLineEdit *nameLineEdit;
    QLineEdit *idLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *lastNameLineEdit;
    QPushButton *signupBtn;
    QLineEdit *userNameLineEdit;
    QSpacerItem *verticalSpacer_7;
    QWidget *page_4;
    QGridLayout *gridLayout_8;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *backBtn_5;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_11;
    QWidget *widget_12;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *verticalSpacer_10;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(600, 400);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(600, 400));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMinimumSize(QSize(600, 400));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        page_0 = new QWidget();
        page_0->setObjectName("page_0");
        gridLayout_2 = new QGridLayout(page_0);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(page_0);
        frame->setObjectName("frame");
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setStyleSheet(QString::fromUtf8("background-color: rgb(161, 255, 219);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        WelcomeHeader = new QLabel(frame);
        WelcomeHeader->setObjectName("WelcomeHeader");
        WelcomeHeader->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"font-weight: bold;\n"
"color: #2E86C1;\n"
""));
        WelcomeHeader->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout->addWidget(WelcomeHeader);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget = new QWidget(frame);
        widget->setObjectName("widget");
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        customerBtn = new QPushButton(widget);
        customerBtn->setObjectName("customerBtn");
        customerBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        customerBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3A7BD5;\n"
"    color: white;\n"
"    border: 2px solid #2E5EA0;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5599EE;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E5EA0;\n"
"}\n"
""));

        horizontalLayout->addWidget(customerBtn);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        adminBtn = new QPushButton(widget);
        adminBtn->setObjectName("adminBtn");
        adminBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        adminBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3A7BD5;\n"
"    color: white;\n"
"    border: 2px solid #2E5EA0;\n"
"    border-radius: 10px;\n"
"    padding: 8px 16px;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #5599EE;\n"
"	\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #2E5EA0;\n"
"}\n"
""));

        horizontalLayout->addWidget(adminBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget);

        widget_6 = new QWidget(frame);
        widget_6->setObjectName("widget_6");
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        signupLabel = new ClickableLabel(widget_6);
        signupLabel->setObjectName("signupLabel");
        signupLabel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        signupLabel->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLabel#signupLabel {\n"
"            \n"
"	color: rgb(255, 0, 0);\n"
"    text-decoration: underline;\n"
"}\n"
"\n"
"QLabel#signupLabel:hover {\n"
"    color: #0b52c2;           \n"
"   \n"
"}\n"
"\n"
""));

        horizontalLayout_6->addWidget(signupLabel);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);


        verticalLayout->addWidget(widget_6);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        stackedWidget->addWidget(page_0);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        gridLayout_6 = new QGridLayout(page_1);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(page_1);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("background-color: rgb(148, 255, 131);"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        widget_10 = new QWidget(frame_4);
        widget_10->setObjectName("widget_10");
        horizontalLayout_8 = new QHBoxLayout(widget_10);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        backBtn_3 = new QPushButton(widget_10);
        backBtn_3->setObjectName("backBtn_3");
        backBtn_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backBtn_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(240, 8, 11);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 20px;\n"
"    font-size: 8px;\n"
"	\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(220, 8, 11);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(250, 8, 11);\n"
"}\n"
""));

        horizontalLayout_8->addWidget(backBtn_3);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_22);


        verticalLayout_4->addWidget(widget_10);

        label = new QLabel(frame_4);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"font-weight: bold;\n"
"\n"
"color: rgb(0, 85, 0);"));
        label->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_4->addWidget(label);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        widget_9 = new QWidget(frame_4);
        widget_9->setObjectName("widget_9");
        gridLayout_7 = new QGridLayout(widget_9);
        gridLayout_7->setObjectName("gridLayout_7");
        viewAccountsBtn = new QPushButton(widget_9);
        viewAccountsBtn->setObjectName("viewAccountsBtn");
        viewAccountsBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        viewAccountsBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;       /* Green with good contrast */\n"
"    color: white;                    /* Visible text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;       /* Darker green on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449;       /* Even darker on press */\n"
"}\n"
""));

        gridLayout_7->addWidget(viewAccountsBtn, 0, 1, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_17, 0, 0, 1, 1);

        secondPassBtn = new QPushButton(widget_9);
        secondPassBtn->setObjectName("secondPassBtn");
        secondPassBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        secondPassBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;       /* Green with good contrast */\n"
"    color: white;                    /* Visible text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;       /* Darker green on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449;       /* Even darker on press */\n"
"}\n"
""));

        gridLayout_7->addWidget(secondPassBtn, 1, 3, 1, 1);

        firstPassBtn = new QPushButton(widget_9);
        firstPassBtn->setObjectName("firstPassBtn");
        firstPassBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        firstPassBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;       /* Green with good contrast */\n"
"    color: white;                    /* Visible text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;       /* Darker green on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449;       /* Even darker on press */\n"
"}\n"
""));

        gridLayout_7->addWidget(firstPassBtn, 0, 3, 1, 1);

        depositBtn = new QPushButton(widget_9);
        depositBtn->setObjectName("depositBtn");
        depositBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        depositBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #2ecc71;       /* Green with good contrast */\n"
"    color: white;                    /* Visible text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #27ae60;       /* Darker green on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1e8449;       /* Even darker on press */\n"
"}\n"
""));

        gridLayout_7->addWidget(depositBtn, 1, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_16, 0, 2, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_18, 0, 4, 1, 1);

        horizontalSpacer_19 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_19, 1, 0, 1, 1);

        horizontalSpacer_20 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_20, 1, 2, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_21, 1, 4, 1, 1);


        verticalLayout_4->addWidget(widget_9);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);


        gridLayout_6->addWidget(frame_4, 0, 0, 1, 1);

        stackedWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(page_2);
        frame_2->setObjectName("frame_2");
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 232, 223);"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        widget_5 = new QWidget(frame_2);
        widget_5->setObjectName("widget_5");
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        backBtn_1 = new QPushButton(widget_5);
        backBtn_1->setObjectName("backBtn_1");
        backBtn_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(240, 8, 11);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 20px;\n"
"    font-size: 8px;\n"
"	\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(220, 8, 11);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(250, 8, 11);\n"
"}\n"
""));

        horizontalLayout_5->addWidget(backBtn_1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);


        verticalLayout_2->addWidget(widget_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        loginHeaderLabel = new QLabel(frame_2);
        loginHeaderLabel->setObjectName("loginHeaderLabel");
        loginHeaderLabel->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"font-weight: bold;\n"
"color: rgb(0, 0, 0);"));
        loginHeaderLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_2->addWidget(loginHeaderLabel);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        widget_2 = new QWidget(frame_2);
        widget_2->setObjectName("widget_2");
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        usernameLine = new QLineEdit(widget_2);
        usernameLine->setObjectName("usernameLine");
        usernameLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #007B8A;   \n"
"    border-radius: 8px;\n"
"    padding: 6px 10px;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_2->addWidget(usernameLine);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(frame_2);
        widget_3->setObjectName("widget_3");
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        passwordLine = new QLineEdit(widget_3);
        passwordLine->setObjectName("passwordLine");
        passwordLine->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    border: 2px solid #007B8A;   /* a deep teal for contrast */\n"
"    border-radius: 8px;\n"
"    padding: 6px 10px;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
""));

        horizontalLayout_3->addWidget(passwordLine);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);


        verticalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(frame_2);
        widget_4->setObjectName("widget_4");
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        loginBtn = new QPushButton(widget_4);
        loginBtn->setObjectName("loginBtn");
        loginBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loginBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #007B8A;\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 20px;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0097A7;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #005F6A;\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: #cccccc;\n"
"    color: #666666;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(loginBtn);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_9);


        verticalLayout_2->addWidget(widget_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_4 = new QGridLayout(page_3);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(page_3);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgb(155, 198, 255);"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        widget_7 = new QWidget(frame_3);
        widget_7->setObjectName("widget_7");
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        backBtn_2 = new QPushButton(widget_7);
        backBtn_2->setObjectName("backBtn_2");
        backBtn_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backBtn_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(240, 8, 11);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 20px;\n"
"    font-size: 8px;\n"
"	\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(220, 8, 11);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(250, 8, 11);\n"
"}\n"
""));

        horizontalLayout_7->addWidget(backBtn_2);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_3->addWidget(widget_7);

        infoHeaderLabel = new QLabel(frame_3);
        infoHeaderLabel->setObjectName("infoHeaderLabel");
        infoHeaderLabel->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"font-weight: bold;\n"
"color: rgb(0, 85, 255);\n"
""));
        infoHeaderLabel->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_3->addWidget(infoHeaderLabel);

        label_2 = new QLabel(frame_3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("font-size: 12pt;\n"
"font-weight: bold;\n"
"color: rgb(0, 85, 255);\n"
""));
        label_2->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_3->addWidget(label_2);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_6);

        widget_8 = new QWidget(frame_3);
        widget_8->setObjectName("widget_8");
        gridLayout_5 = new QGridLayout(widget_8);
        gridLayout_5->setObjectName("gridLayout_5");
        ageSpinBox = new QSpinBox(widget_8);
        ageSpinBox->setObjectName("ageSpinBox");
        ageSpinBox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        ageSpinBox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: white;\n"
"    color: rgb(0, 0, 0);\n"
"    font-size: 10px;\n"
"    padding: 3px 5px;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 6px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QSpinBox:focus {\n"
"    border: 2px solid #1abc9c;\n"
"    background-color: #ecfaff;\n"
"}\n"
"\n"
"QSpinBox::up-button, QSpinBox::down-button {\n"
"    width: 14px;\n"
"    height: 10px;\n"
"    background-color: #d6f0ff;\n"
"    border: 1px solid #3498db;\n"
"    padding: 0px;\n"
"}\n"
"\n"
"QSpinBox::up-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: top right;\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QSpinBox::down-button {\n"
"    subcontrol-origin: border;\n"
"    subcontrol-position: bottom right;\n"
"    border-bottom-right-radius: 3px;\n"
"}\n"
"\n"
"QSpinBox::up-arrow, QSpinBox::down-arrow {\n"
"    width: 6px;\n"
"    height: 6px;\n"
"}\n"
"\n"
"QSpinBox::up-arrow {\n"
"    width: 0;\n"
"    height: 0;\n"
"    border-left: 5px solid tra"
                        "nsparent;\n"
"    border-right: 5px solid transparent;\n"
"    border-bottom: 6px solid black;\n"
"}\n"
"\n"
"QSpinBox::down-arrow {\n"
"    width: 0;\n"
"    height: 0;\n"
"    border-left: 5px solid transparent;\n"
"    border-right: 5px solid transparent;\n"
"    border-top: 6px solid black;\n"
"}\n"
"\n"
"\n"
"\n"
""));
        ageSpinBox->setMinimum(18);
        ageSpinBox->setMaximum(120);

        gridLayout_5->addWidget(ageSpinBox, 1, 1, 1, 1);

        nameLineEdit = new QLineEdit(widget_8);
        nameLineEdit->setObjectName("nameLineEdit");
        nameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    color: rgb(0, 0, 0);\n"
"    font-size: 10px;\n"
"    padding: 3px 5px;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 6px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1abc9c;\n"
"    background-color: #ecfaff;\n"
"}\n"
""));

        gridLayout_5->addWidget(nameLineEdit, 0, 0, 1, 1);

        idLineEdit = new QLineEdit(widget_8);
        idLineEdit->setObjectName("idLineEdit");
        idLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    color: rgb(0, 0, 0);\n"
"    font-size: 10px;\n"
"    padding: 3px 5px;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 6px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1abc9c;\n"
"    background-color: #ecfaff;\n"
"}\n"
""));

        gridLayout_5->addWidget(idLineEdit, 0, 1, 1, 1);

        passwordLineEdit = new QLineEdit(widget_8);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    color: rgb(0, 0, 0);\n"
"    font-size: 10px;\n"
"    padding: 3px 5px;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 6px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1abc9c;\n"
"    background-color: #ecfaff;\n"
"}\n"
""));

        gridLayout_5->addWidget(passwordLineEdit, 1, 2, 1, 1);

        lastNameLineEdit = new QLineEdit(widget_8);
        lastNameLineEdit->setObjectName("lastNameLineEdit");
        lastNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    color: rgb(0, 0, 0);\n"
"    font-size: 10px;\n"
"    padding: 3px 5px;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 6px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1abc9c;\n"
"    background-color: #ecfaff;\n"
"}\n"
""));

        gridLayout_5->addWidget(lastNameLineEdit, 1, 0, 1, 1);

        signupBtn = new QPushButton(widget_8);
        signupBtn->setObjectName("signupBtn");
        signupBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        signupBtn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Bright blue */\n"
"    color: white;                    /* White text */\n"
"    border: none;\n"
"    padding: 8px 15px;\n"
"    border-radius: 8px;\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980b9;       /* Darker blue on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1c5d99;       /* Even darker on press */\n"
"}\n"
""));

        gridLayout_5->addWidget(signupBtn, 1, 3, 1, 1);

        userNameLineEdit = new QLineEdit(widget_8);
        userNameLineEdit->setObjectName("userNameLineEdit");
        userNameLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: white;\n"
"    color: rgb(0, 0, 0);\n"
"    font-size: 10px;\n"
"    padding: 3px 5px;\n"
"    border: 2px solid #3498db;\n"
"    border-radius: 6px;\n"
"	font-weight: bold;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 2px solid #1abc9c;\n"
"    background-color: #ecfaff;\n"
"}\n"
""));

        gridLayout_5->addWidget(userNameLineEdit, 0, 2, 1, 1);


        verticalLayout_3->addWidget(widget_8);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_7);


        gridLayout_4->addWidget(frame_3, 0, 0, 1, 1);

        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        gridLayout_8 = new QGridLayout(page_4);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(page_4);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("background-color: rgb(152, 255, 246);"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        widget_11 = new QWidget(frame_5);
        widget_11->setObjectName("widget_11");
        horizontalLayout_10 = new QHBoxLayout(widget_11);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        backBtn_5 = new QPushButton(widget_11);
        backBtn_5->setObjectName("backBtn_5");
        backBtn_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        backBtn_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    \n"
"	background-color: rgb(240, 8, 11);\n"
"    color: white;\n"
"    border: none;\n"
"    border-radius: 8px;\n"
"    padding: 8px 20px;\n"
"    font-size: 8px;\n"
"	\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(220, 8, 11);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(250, 8, 11);\n"
"}\n"
""));

        horizontalLayout_10->addWidget(backBtn_5);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_14);


        verticalLayout_5->addWidget(widget_11);

        label_3 = new QLabel(frame_5);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font-size: 20pt;\n"
"font-weight: bold;\n"
"color: rgb(0, 85, 255);\n"
""));
        label_3->setAlignment(Qt::AlignmentFlag::AlignHCenter|Qt::AlignmentFlag::AlignTop);

        verticalLayout_5->addWidget(label_3);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_11);

        widget_12 = new QWidget(frame_5);
        widget_12->setObjectName("widget_12");
        gridLayout_9 = new QGridLayout(widget_12);
        gridLayout_9->setObjectName("gridLayout_9");
        pushButton_5 = new QPushButton(widget_12);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Soft but visible blue */\n"
"    color: white;                    /* Clear text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d89c6;       /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1b639c;       /* Darkest on press */\n"
"}\n"
""));

        gridLayout_9->addWidget(pushButton_5, 2, 1, 1, 1);

        pushButton_7 = new QPushButton(widget_12);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Soft but visible blue */\n"
"    color: white;                    /* Clear text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d89c6;       /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1b639c;       /* Darkest on press */\n"
"}\n"
""));

        gridLayout_9->addWidget(pushButton_7, 1, 1, 1, 1);

        pushButton_6 = new QPushButton(widget_12);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Soft but visible blue */\n"
"    color: white;                    /* Clear text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d89c6;       /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1b639c;       /* Darkest on press */\n"
"}\n"
""));

        gridLayout_9->addWidget(pushButton_6, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(widget_12);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Soft but visible blue */\n"
"    color: white;                    /* Clear text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d89c6;       /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1b639c;       /* Darkest on press */\n"
"}\n"
""));

        gridLayout_9->addWidget(pushButton_4, 0, 1, 1, 1);

        pushButton_2 = new QPushButton(widget_12);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Soft but visible blue */\n"
"    color: white;                    /* Clear text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d89c6;       /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1b639c;       /* Darkest on press */\n"
"}\n"
""));

        gridLayout_9->addWidget(pushButton_2, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(widget_12);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498db;       /* Soft but visible blue */\n"
"    color: white;                    /* Clear text */\n"
"    border: none;\n"
"    padding: 10px 20px;\n"
"    border-radius: 10px;\n"
"    font-size: 14px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2d89c6;       /* Slightly darker on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1b639c;       /* Darkest on press */\n"
"}\n"
""));

        gridLayout_9->addWidget(pushButton_3, 2, 0, 1, 1);


        verticalLayout_5->addWidget(widget_12);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_10);


        gridLayout_8->addWidget(frame_5, 0, 0, 1, 1);

        stackedWidget->addWidget(page_4);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        WelcomeHeader->setText(QCoreApplication::translate("MainWindow", "Welcome To The MZ Bank Services", nullptr));
        customerBtn->setText(QCoreApplication::translate("MainWindow", "Login as Costumer", nullptr));
        adminBtn->setText(QCoreApplication::translate("MainWindow", "Login as Admin", nullptr));
        signupLabel->setText(QCoreApplication::translate("MainWindow", "Don't have an account? Sign up", nullptr));
        backBtn_3->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Welcome To The Costumer Menu", nullptr));
        viewAccountsBtn->setText(QCoreApplication::translate("MainWindow", "View All Accounts", nullptr));
        secondPassBtn->setText(QCoreApplication::translate("MainWindow", "Change Second PassKey", nullptr));
        firstPassBtn->setText(QCoreApplication::translate("MainWindow", "Change First PassKey", nullptr));
        depositBtn->setText(QCoreApplication::translate("MainWindow", "Deposit", nullptr));
        backBtn_1->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        loginHeaderLabel->setText(QString());
        usernameLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        passwordLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        loginBtn->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        backBtn_2->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        infoHeaderLabel->setText(QCoreApplication::translate("MainWindow", "Enter all the infos to sign up", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "(you are signing up as admin)", nullptr));
        ageSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "   years", nullptr));
        nameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        idLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "ID Number:", nullptr));
        passwordLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        lastNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "LastName:", nullptr));
        signupBtn->setText(QCoreApplication::translate("MainWindow", "Confirm and signup", nullptr));
        userNameLineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "UserName:", nullptr));
        backBtn_5->setText(QCoreApplication::translate("MainWindow", "Back", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Welcome To The Admins Menu", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Change My Infos", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Delete Costumers", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "Add Costumers", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "View All Accounts", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "View All Users", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "View All Admins", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

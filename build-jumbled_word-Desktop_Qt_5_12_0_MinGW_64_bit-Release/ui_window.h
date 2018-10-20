/********************************************************************************
** Form generated from reading UI file 'window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOW_H
#define UI_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_window
{
public:
    QWidget *centralWidget;
    QPushButton *Button_Solve;
    QListWidget *listWidget_SOLVED;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_JWord;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *window)
    {
        if (window->objectName().isEmpty())
            window->setObjectName(QString::fromUtf8("window"));
        window->resize(751, 369);
        centralWidget = new QWidget(window);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Button_Solve = new QPushButton(centralWidget);
        Button_Solve->setObjectName(QString::fromUtf8("Button_Solve"));
        Button_Solve->setGeometry(QRect(380, 10, 291, 41));
        listWidget_SOLVED = new QListWidget(centralWidget);
        listWidget_SOLVED->setObjectName(QString::fromUtf8("listWidget_SOLVED"));
        listWidget_SOLVED->setGeometry(QRect(10, 100, 731, 211));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 80, 81, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 20, 351, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_JWord = new QLineEdit(widget);
        lineEdit_JWord->setObjectName(QString::fromUtf8("lineEdit_JWord"));

        horizontalLayout->addWidget(lineEdit_JWord);

        window->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(window);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 751, 21));
        window->setMenuBar(menuBar);
        mainToolBar = new QToolBar(window);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        window->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(window);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        window->setStatusBar(statusBar);

        retranslateUi(window);

        QMetaObject::connectSlotsByName(window);
    } // setupUi

    void retranslateUi(QMainWindow *window)
    {
        window->setWindowTitle(QApplication::translate("window", "Jumbled Solver", nullptr));
        Button_Solve->setText(QApplication::translate("window", "SOLVE", nullptr));
        label_2->setText(QApplication::translate("window", "Possible Words", nullptr));
        label->setText(QApplication::translate("window", "Jumbled Word", nullptr));
    } // retranslateUi

};

namespace Ui {
    class window: public Ui_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOW_H

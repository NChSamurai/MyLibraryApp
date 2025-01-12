/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *AllBooksWindowButton;
    QPushButton *AllAuthorsWindowButton;
    QPushButton *AllGenresWindowButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(243, 367);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 0, 201, 331));
        AllBooksWindowButton = new QPushButton(groupBox);
        AllBooksWindowButton->setObjectName("AllBooksWindowButton");
        AllBooksWindowButton->setGeometry(QRect(10, 20, 181, 91));
        AllBooksWindowButton->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        AllAuthorsWindowButton = new QPushButton(groupBox);
        AllAuthorsWindowButton->setObjectName("AllAuthorsWindowButton");
        AllAuthorsWindowButton->setGeometry(QRect(10, 120, 181, 91));
        AllGenresWindowButton = new QPushButton(groupBox);
        AllGenresWindowButton->setObjectName("AllGenresWindowButton");
        AllGenresWindowButton->setGeometry(QRect(10, 220, 181, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 243, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MyLibrary", nullptr));
        groupBox->setTitle(QString());
        AllBooksWindowButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\201\320\265 \320\272\320\275\320\270\320\263\320\270", nullptr));
        AllAuthorsWindowButton->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\321\200\321\213", nullptr));
        AllGenresWindowButton->setText(QCoreApplication::translate("MainWindow", "\320\226\320\260\320\275\321\200\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

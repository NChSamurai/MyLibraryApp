/********************************************************************************
** Form generated from reading UI file 'allbookswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLBOOKSWINDOW_H
#define UI_ALLBOOKSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AllBooksWindow
{
public:
    QPushButton *ConfirmAddBookButton;
    QTableWidget *tableWidget;
    QPushButton *deleteBookButton;

    void setupUi(QDialog *AllBooksWindow)
    {
        if (AllBooksWindow->objectName().isEmpty())
            AllBooksWindow->setObjectName("AllBooksWindow");
        AllBooksWindow->resize(754, 593);
        ConfirmAddBookButton = new QPushButton(AllBooksWindow);
        ConfirmAddBookButton->setObjectName("ConfirmAddBookButton");
        ConfirmAddBookButton->setGeometry(QRect(40, 40, 131, 61));
        tableWidget = new QTableWidget(AllBooksWindow);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(240, 11, 351, 551));
        deleteBookButton = new QPushButton(AllBooksWindow);
        deleteBookButton->setObjectName("deleteBookButton");
        deleteBookButton->setGeometry(QRect(40, 120, 131, 61));

        retranslateUi(AllBooksWindow);

        QMetaObject::connectSlotsByName(AllBooksWindow);
    } // setupUi

    void retranslateUi(QDialog *AllBooksWindow)
    {
        AllBooksWindow->setWindowTitle(QCoreApplication::translate("AllBooksWindow", "Dialog", nullptr));
        ConfirmAddBookButton->setText(QCoreApplication::translate("AllBooksWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteBookButton->setText(QCoreApplication::translate("AllBooksWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllBooksWindow: public Ui_AllBooksWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLBOOKSWINDOW_H

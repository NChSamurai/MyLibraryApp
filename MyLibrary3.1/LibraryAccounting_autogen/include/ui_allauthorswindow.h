/********************************************************************************
** Form generated from reading UI file 'allauthorswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLAUTHORSWINDOW_H
#define UI_ALLAUTHORSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AllAuthorsWindow
{
public:
    QTableWidget *tableWidget2;
    QPushButton *addAuthorButton;
    QPushButton *pushButton;

    void setupUi(QDialog *AllAuthorsWindow)
    {
        if (AllAuthorsWindow->objectName().isEmpty())
            AllAuthorsWindow->setObjectName("AllAuthorsWindow");
        AllAuthorsWindow->resize(400, 300);
        tableWidget2 = new QTableWidget(AllAuthorsWindow);
        tableWidget2->setObjectName("tableWidget2");
        tableWidget2->setGeometry(QRect(130, 21, 256, 241));
        addAuthorButton = new QPushButton(AllAuthorsWindow);
        addAuthorButton->setObjectName("addAuthorButton");
        addAuthorButton->setGeometry(QRect(4, 43, 111, 41));
        pushButton = new QPushButton(AllAuthorsWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 90, 101, 41));

        retranslateUi(AllAuthorsWindow);

        QMetaObject::connectSlotsByName(AllAuthorsWindow);
    } // setupUi

    void retranslateUi(QDialog *AllAuthorsWindow)
    {
        AllAuthorsWindow->setWindowTitle(QCoreApplication::translate("AllAuthorsWindow", "Dialog", nullptr));
        addAuthorButton->setText(QCoreApplication::translate("AllAuthorsWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\262\321\202\320\276\321\200\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("AllAuthorsWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\260\320\262\321\202\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllAuthorsWindow: public Ui_AllAuthorsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLAUTHORSWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'allgenreswindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLGENRESWINDOW_H
#define UI_ALLGENRESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_AllGenresWindow
{
public:
    QTableWidget *tableWidget3;
    QPushButton *addGenreButton;
    QPushButton *pushButton;

    void setupUi(QDialog *AllGenresWindow)
    {
        if (AllGenresWindow->objectName().isEmpty())
            AllGenresWindow->setObjectName("AllGenresWindow");
        AllGenresWindow->resize(326, 300);
        tableWidget3 = new QTableWidget(AllGenresWindow);
        tableWidget3->setObjectName("tableWidget3");
        tableWidget3->setGeometry(QRect(170, 40, 121, 192));
        addGenreButton = new QPushButton(AllGenresWindow);
        addGenreButton->setObjectName("addGenreButton");
        addGenreButton->setGeometry(QRect(30, 60, 101, 51));
        pushButton = new QPushButton(AllGenresWindow);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 120, 101, 41));

        retranslateUi(AllGenresWindow);

        QMetaObject::connectSlotsByName(AllGenresWindow);
    } // setupUi

    void retranslateUi(QDialog *AllGenresWindow)
    {
        AllGenresWindow->setWindowTitle(QCoreApplication::translate("AllGenresWindow", "Dialog", nullptr));
        addGenreButton->setText(QCoreApplication::translate("AllGenresWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\266\320\260\320\275\321\200", nullptr));
        pushButton->setText(QCoreApplication::translate("AllGenresWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\266\320\260\320\275\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllGenresWindow: public Ui_AllGenresWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLGENRESWINDOW_H

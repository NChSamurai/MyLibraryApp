/********************************************************************************
** Form generated from reading UI file 'addauthorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDAUTHORWINDOW_H
#define UI_ADDAUTHORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddAuthorWindow
{
public:
    QPushButton *confirmAuthorButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *addAuthorLine;

    void setupUi(QDialog *AddAuthorWindow)
    {
        if (AddAuthorWindow->objectName().isEmpty())
            AddAuthorWindow->setObjectName("AddAuthorWindow");
        AddAuthorWindow->resize(400, 106);
        confirmAuthorButton = new QPushButton(AddAuthorWindow);
        confirmAuthorButton->setObjectName("confirmAuthorButton");
        confirmAuthorButton->setGeometry(QRect(150, 70, 75, 24));
        widget = new QWidget(AddAuthorWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 30, 331, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        addAuthorLine = new QLineEdit(widget);
        addAuthorLine->setObjectName("addAuthorLine");

        horizontalLayout->addWidget(addAuthorLine);


        retranslateUi(AddAuthorWindow);

        QMetaObject::connectSlotsByName(AddAuthorWindow);
    } // setupUi

    void retranslateUi(QDialog *AddAuthorWindow)
    {
        AddAuthorWindow->setWindowTitle(QCoreApplication::translate("AddAuthorWindow", "Dialog", nullptr));
        confirmAuthorButton->setText(QCoreApplication::translate("AddAuthorWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddAuthorWindow", "\320\230\320\274\321\217 \320\260\320\262\321\202\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddAuthorWindow: public Ui_AddAuthorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDAUTHORWINDOW_H

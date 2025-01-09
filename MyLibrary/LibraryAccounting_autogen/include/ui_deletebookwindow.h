/********************************************************************************
** Form generated from reading UI file 'deletebookwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOKWINDOW_H
#define UI_DELETEBOOKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteBookWindow
{
public:
    QPushButton *confirmDeleteBook;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *deleteBookLine;

    void setupUi(QDialog *DeleteBookWindow)
    {
        if (DeleteBookWindow->objectName().isEmpty())
            DeleteBookWindow->setObjectName("DeleteBookWindow");
        DeleteBookWindow->resize(400, 135);
        confirmDeleteBook = new QPushButton(DeleteBookWindow);
        confirmDeleteBook->setObjectName("confirmDeleteBook");
        confirmDeleteBook->setGeometry(QRect(130, 90, 111, 31));
        widget = new QWidget(DeleteBookWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 50, 351, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        deleteBookLine = new QLineEdit(widget);
        deleteBookLine->setObjectName("deleteBookLine");

        horizontalLayout->addWidget(deleteBookLine);


        retranslateUi(DeleteBookWindow);

        QMetaObject::connectSlotsByName(DeleteBookWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteBookWindow)
    {
        DeleteBookWindow->setWindowTitle(QCoreApplication::translate("DeleteBookWindow", "Dialog", nullptr));
        confirmDeleteBook->setText(QCoreApplication::translate("DeleteBookWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("DeleteBookWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteBookWindow: public Ui_DeleteBookWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOKWINDOW_H

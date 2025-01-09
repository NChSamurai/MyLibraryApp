/********************************************************************************
** Form generated from reading UI file 'deleteauthorwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEAUTHORWINDOW_H
#define UI_DELETEAUTHORWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteAuthorWindow
{
public:
    QPushButton *deleteAuthorButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *deleteAuthorLine;

    void setupUi(QDialog *DeleteAuthorWindow)
    {
        if (DeleteAuthorWindow->objectName().isEmpty())
            DeleteAuthorWindow->setObjectName("DeleteAuthorWindow");
        DeleteAuthorWindow->resize(400, 132);
        deleteAuthorButton = new QPushButton(DeleteAuthorWindow);
        deleteAuthorButton->setObjectName("deleteAuthorButton");
        deleteAuthorButton->setGeometry(QRect(130, 90, 101, 31));
        widget = new QWidget(DeleteAuthorWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 50, 331, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        deleteAuthorLine = new QLineEdit(widget);
        deleteAuthorLine->setObjectName("deleteAuthorLine");

        horizontalLayout->addWidget(deleteAuthorLine);


        retranslateUi(DeleteAuthorWindow);

        QMetaObject::connectSlotsByName(DeleteAuthorWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteAuthorWindow)
    {
        DeleteAuthorWindow->setWindowTitle(QCoreApplication::translate("DeleteAuthorWindow", "Dialog", nullptr));
        deleteAuthorButton->setText(QCoreApplication::translate("DeleteAuthorWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("DeleteAuthorWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217 \320\260\320\262\321\202\320\276\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteAuthorWindow: public Ui_DeleteAuthorWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEAUTHORWINDOW_H

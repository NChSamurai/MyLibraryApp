/********************************************************************************
** Form generated from reading UI file 'deletegenrewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEGENREWINDOW_H
#define UI_DELETEGENREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteGenreWindow
{
public:
    QPushButton *deleteGenreButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *deleteGenreLine;

    void setupUi(QDialog *DeleteGenreWindow)
    {
        if (DeleteGenreWindow->objectName().isEmpty())
            DeleteGenreWindow->setObjectName("DeleteGenreWindow");
        DeleteGenreWindow->resize(400, 174);
        deleteGenreButton = new QPushButton(DeleteGenreWindow);
        deleteGenreButton->setObjectName("deleteGenreButton");
        deleteGenreButton->setGeometry(QRect(140, 110, 91, 31));
        widget = new QWidget(DeleteGenreWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 60, 341, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        deleteGenreLine = new QLineEdit(widget);
        deleteGenreLine->setObjectName("deleteGenreLine");

        horizontalLayout->addWidget(deleteGenreLine);


        retranslateUi(DeleteGenreWindow);

        QMetaObject::connectSlotsByName(DeleteGenreWindow);
    } // setupUi

    void retranslateUi(QDialog *DeleteGenreWindow)
    {
        DeleteGenreWindow->setWindowTitle(QCoreApplication::translate("DeleteGenreWindow", "Dialog", nullptr));
        deleteGenreButton->setText(QCoreApplication::translate("DeleteGenreWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("DeleteGenreWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\266\320\260\320\275\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeleteGenreWindow: public Ui_DeleteGenreWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEGENREWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'addgenrewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDGENREWINDOW_H
#define UI_ADDGENREWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddGenreWindow
{
public:
    QPushButton *addGenreButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *addGenreLine;

    void setupUi(QDialog *AddGenreWindow)
    {
        if (AddGenreWindow->objectName().isEmpty())
            AddGenreWindow->setObjectName("AddGenreWindow");
        AddGenreWindow->resize(400, 165);
        addGenreButton = new QPushButton(AddGenreWindow);
        addGenreButton->setObjectName("addGenreButton");
        addGenreButton->setGeometry(QRect(140, 110, 101, 31));
        widget = new QWidget(AddGenreWindow);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 331, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        addGenreLine = new QLineEdit(widget);
        addGenreLine->setObjectName("addGenreLine");

        horizontalLayout->addWidget(addGenreLine);


        retranslateUi(AddGenreWindow);

        QMetaObject::connectSlotsByName(AddGenreWindow);
    } // setupUi

    void retranslateUi(QDialog *AddGenreWindow)
    {
        AddGenreWindow->setWindowTitle(QCoreApplication::translate("AddGenreWindow", "Dialog", nullptr));
        addGenreButton->setText(QCoreApplication::translate("AddGenreWindow", "\320\237\320\276\320\264\321\202\320\262\320\265\321\200\320\264\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("AddGenreWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\266\320\260\320\275\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddGenreWindow: public Ui_AddGenreWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDGENREWINDOW_H

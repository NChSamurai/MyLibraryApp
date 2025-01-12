/********************************************************************************
** Form generated from reading UI file 'addnewbook.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWBOOK_H
#define UI_ADDNEWBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewBook
{
public:
    QPushButton *confirmNewBook;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *newBookLineTittle;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *newBookLineGenre;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *newBookLineAuthor;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *newBookLineYear;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *newBookLineDescription;

    void setupUi(QDialog *AddNewBook)
    {
        if (AddNewBook->objectName().isEmpty())
            AddNewBook->setObjectName("AddNewBook");
        AddNewBook->resize(550, 365);
        confirmNewBook = new QPushButton(AddNewBook);
        confirmNewBook->setObjectName("confirmNewBook");
        confirmNewBook->setGeometry(QRect(230, 310, 75, 24));
        widget = new QWidget(AddNewBook);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 551, 281));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        newBookLineTittle = new QLineEdit(widget);
        newBookLineTittle->setObjectName("newBookLineTittle");

        horizontalLayout->addWidget(newBookLineTittle);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        newBookLineGenre = new QLineEdit(widget);
        newBookLineGenre->setObjectName("newBookLineGenre");

        horizontalLayout_2->addWidget(newBookLineGenre);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        newBookLineAuthor = new QLineEdit(widget);
        newBookLineAuthor->setObjectName("newBookLineAuthor");

        horizontalLayout_3->addWidget(newBookLineAuthor);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");

        horizontalLayout_4->addWidget(label_4);

        newBookLineYear = new QLineEdit(widget);
        newBookLineYear->setObjectName("newBookLineYear");

        horizontalLayout_4->addWidget(newBookLineYear);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_5->addWidget(label_5);

        newBookLineDescription = new QLineEdit(widget);
        newBookLineDescription->setObjectName("newBookLineDescription");

        horizontalLayout_5->addWidget(newBookLineDescription);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(AddNewBook);

        QMetaObject::connectSlotsByName(AddNewBook);
    } // setupUi

    void retranslateUi(QDialog *AddNewBook)
    {
        AddNewBook->setWindowTitle(QCoreApplication::translate("AddNewBook", "Dialog", nullptr));
        confirmNewBook->setText(QCoreApplication::translate("AddNewBook", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("AddNewBook", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265", nullptr));
        label_2->setText(QCoreApplication::translate("AddNewBook", "\320\226\320\260\320\275\321\200", nullptr));
        label_3->setText(QCoreApplication::translate("AddNewBook", "\320\220\320\262\321\202\320\276\321\200", nullptr));
        label_4->setText(QCoreApplication::translate("AddNewBook", "\320\223\320\276\320\264", nullptr));
        label_5->setText(QCoreApplication::translate("AddNewBook", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNewBook: public Ui_AddNewBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWBOOK_H

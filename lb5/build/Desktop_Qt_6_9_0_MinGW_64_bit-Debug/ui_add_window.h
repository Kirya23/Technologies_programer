/********************************************************************************
** Form generated from reading UI file 'add_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_WINDOW_H
#define UI_ADD_WINDOW_H

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

class Ui_Add_window
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QLineEdit *lineEdit_4;

    void setupUi(QDialog *Add_window)
    {
        if (Add_window->objectName().isEmpty())
            Add_window->setObjectName("Add_window");
        Add_window->resize(549, 479);
        layoutWidget = new QWidget(Add_window);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(120, 390, 321, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        layoutWidget1 = new QWidget(Add_window);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(12, 12, 521, 351));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget1);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        horizontalLayout_4->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget1);
        lineEdit_3->setObjectName("lineEdit_3");

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName("label_4");

        horizontalLayout_5->addWidget(label_4);

        lineEdit_4 = new QLineEdit(layoutWidget1);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(Add_window);

        QMetaObject::connectSlotsByName(Add_window);
    } // setupUi

    void retranslateUi(QDialog *Add_window)
    {
        Add_window->setWindowTitle(QCoreApplication::translate("Add_window", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Add_window", "\320\236\320\272", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Add_window", "Not ok", nullptr));
        label_2->setText(QCoreApplication::translate("Add_window", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("Add_window", "Weight", nullptr));
        label_4->setText(QCoreApplication::translate("Add_window", "Flavor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_window: public Ui_Add_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_WINDOW_H

/********************************************************************************
** Form generated from reading UI file 'edit_window.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_WINDOW_H
#define UI_EDIT_WINDOW_H

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

class Ui_Edit_window
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *Edit_window)
    {
        if (Edit_window->objectName().isEmpty())
            Edit_window->setObjectName("Edit_window");
        Edit_window->resize(584, 497);
        layoutWidget = new QWidget(Edit_window);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(138, 408, 321, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout_2->addWidget(pushButton_4);

        layoutWidget_2 = new QWidget(Edit_window);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 30, 521, 351));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName("label_5");

        horizontalLayout_6->addWidget(label_5);

        lineEdit_5 = new QLineEdit(layoutWidget_2);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_6->addWidget(lineEdit_5);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName("label_6");

        horizontalLayout_7->addWidget(label_6);

        lineEdit_6 = new QLineEdit(layoutWidget_2);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_7->addWidget(lineEdit_6);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName("label_7");

        horizontalLayout_8->addWidget(label_7);

        lineEdit_7 = new QLineEdit(layoutWidget_2);
        lineEdit_7->setObjectName("lineEdit_7");

        horizontalLayout_8->addWidget(lineEdit_7);


        verticalLayout_2->addLayout(horizontalLayout_8);


        retranslateUi(Edit_window);

        QMetaObject::connectSlotsByName(Edit_window);
    } // setupUi

    void retranslateUi(QDialog *Edit_window)
    {
        Edit_window->setWindowTitle(QCoreApplication::translate("Edit_window", "Dialog", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Edit_window", "\320\236\320\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Edit_window", "Not ok", nullptr));
        label_5->setText(QCoreApplication::translate("Edit_window", "Name", nullptr));
        label_6->setText(QCoreApplication::translate("Edit_window", "Weight", nullptr));
        label_7->setText(QCoreApplication::translate("Edit_window", "Flavor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Edit_window: public Ui_Edit_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_WINDOW_H

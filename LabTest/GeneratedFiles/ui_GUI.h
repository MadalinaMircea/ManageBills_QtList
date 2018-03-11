/********************************************************************************
** Form generated from reading UI file 'GUI.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUI_H
#define UI_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GUI
{
public:
    QListWidget *billList;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *sortButton;
    QPushButton *unpaidButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *companyLabel;
    QLineEdit *companyTextBox;
    QPushButton *totalButton;

    void setupUi(QWidget *GUI)
    {
        if (GUI->objectName().isEmpty())
            GUI->setObjectName(QStringLiteral("GUI"));
        GUI->resize(407, 300);
        billList = new QListWidget(GUI);
        billList->setObjectName(QStringLiteral("billList"));
        billList->setGeometry(QRect(0, 0, 256, 301));
        layoutWidget = new QWidget(GUI);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 0, 141, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sortButton = new QPushButton(layoutWidget);
        sortButton->setObjectName(QStringLiteral("sortButton"));

        verticalLayout->addWidget(sortButton);

        unpaidButton = new QPushButton(layoutWidget);
        unpaidButton->setObjectName(QStringLiteral("unpaidButton"));

        verticalLayout->addWidget(unpaidButton);

        layoutWidget1 = new QWidget(GUI);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 190, 141, 81));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        companyLabel = new QLabel(layoutWidget1);
        companyLabel->setObjectName(QStringLiteral("companyLabel"));

        verticalLayout_2->addWidget(companyLabel);

        companyTextBox = new QLineEdit(layoutWidget1);
        companyTextBox->setObjectName(QStringLiteral("companyTextBox"));

        verticalLayout_2->addWidget(companyTextBox);

        totalButton = new QPushButton(layoutWidget1);
        totalButton->setObjectName(QStringLiteral("totalButton"));

        verticalLayout_2->addWidget(totalButton);


        retranslateUi(GUI);

        QMetaObject::connectSlotsByName(GUI);
    } // setupUi

    void retranslateUi(QWidget *GUI)
    {
        GUI->setWindowTitle(QApplication::translate("GUI", "GUI", 0));
        sortButton->setText(QApplication::translate("GUI", "Sort", 0));
        unpaidButton->setText(QApplication::translate("GUI", "Unpaid", 0));
        companyLabel->setText(QApplication::translate("GUI", "Company", 0));
        totalButton->setText(QApplication::translate("GUI", "Calculate Total", 0));
    } // retranslateUi

};

namespace Ui {
    class GUI: public Ui_GUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUI_H

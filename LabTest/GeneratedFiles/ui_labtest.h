/********************************************************************************
** Form generated from reading UI file 'labtest.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABTEST_H
#define UI_LABTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LabTestClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LabTestClass)
    {
        if (LabTestClass->objectName().isEmpty())
            LabTestClass->setObjectName(QStringLiteral("LabTestClass"));
        LabTestClass->resize(600, 400);
        menuBar = new QMenuBar(LabTestClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        LabTestClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(LabTestClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LabTestClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(LabTestClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        LabTestClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(LabTestClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LabTestClass->setStatusBar(statusBar);

        retranslateUi(LabTestClass);

        QMetaObject::connectSlotsByName(LabTestClass);
    } // setupUi

    void retranslateUi(QMainWindow *LabTestClass)
    {
        LabTestClass->setWindowTitle(QApplication::translate("LabTestClass", "LabTest", 0));
    } // retranslateUi

};

namespace Ui {
    class LabTestClass: public Ui_LabTestClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABTEST_H

#ifndef LABTEST_H
#define LABTEST_H

#include <QtWidgets/QMainWindow>
#include "ui_labtest.h"

class LabTest : public QMainWindow
{
	Q_OBJECT

public:
	LabTest(QWidget *parent = 0);
	~LabTest();

private:
	Ui::LabTestClass ui;
};

#endif // LABTEST_H

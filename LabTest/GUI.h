#ifndef GUI_H
#define GUI_H

#include <QWidget>
#include "ui_GUI.h"
#include "Repository.h"

class GUI : public QWidget
{
	Q_OBJECT

public:
	Repository* repo;

	GUI(Repository* r, QWidget *parent = 0);
	~GUI();
	void connectAll();
public slots:
	void populateList();
	void sortButtonHandler();
	void totalButtonHandler();
	void unpaidButtonHandler();

private:
	Ui::GUI ui;
};

#endif // GUI_H

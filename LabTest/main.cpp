#include "labtest.h"
#include "GUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Repository* repo = new Repository();
	Repository::testTotal();
	GUI* w = new GUI{repo};
	w->show();
	return a.exec();
}

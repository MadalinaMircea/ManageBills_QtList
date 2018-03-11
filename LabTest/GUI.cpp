#include "GUI.h"
#include "qbrush.h"

GUI::GUI(Repository* r, QWidget *parent)
	: repo(r), QWidget(parent)
{
	ui.setupUi(this);
	this->connectAll();
	this->populateList();
}

GUI::~GUI(){}

void GUI::connectAll()
{
	QObject::connect(this->ui.sortButton, SIGNAL(clicked()), this, \
		SLOT(sortButtonHandler()));

	QObject::connect(this->ui.totalButton, SIGNAL(clicked()), this, \
		SLOT(totalButtonHandler()));

	QObject::connect(this->ui.unpaidButton, SIGNAL(clicked()), this, \
		SLOT(unpaidButtonHandler()));
}

void GUI::unpaidButtonHandler()
{
	if (this->ui.billList->count() > 0)
		this->ui.billList->clear();

	for (auto b : this->repo->bills)
	{
		QString sum = QString::number(b.sum);
		QString billString = QString::fromStdString(b.company + " - ");
		billString = billString + sum;

		QListWidgetItem* bill = new QListWidgetItem(billString);

		QColor color;
		color.setRed(255);
		color.setBlue(0);
		color.setGreen(0);
		QBrush brush = QBrush{ color };
		if (b.isPaid == false)
			bill->setBackground(brush);
		this->ui.billList->addItem(bill);
	}
		
}

void GUI::sortButtonHandler()
{
	this->repo->sortAll();
	this->populateList();
}

void GUI::totalButtonHandler()
{
	std::string c = this->ui.companyTextBox->text().toStdString();
	double total = this->repo->getTotal(c);

	QString t = QString::number(total);
	QLabel* totalLabel = new QLabel(t);

	totalLabel->show();
}

void GUI::populateList()
{
	if (this->ui.billList->count() > 0)
		this->ui.billList->clear();

	for (auto b : this->repo->bills)
	{
		QString sum = QString::number(b.sum);
		QString billString = QString::fromStdString(b.company + " - ");
		billString = billString + sum;

		QListWidgetItem* bill = new QListWidgetItem(billString);
		this->ui.billList->addItem(bill);
	}
}

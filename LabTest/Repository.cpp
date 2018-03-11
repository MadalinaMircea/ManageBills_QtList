#include "Repository.h"
#include "fstream"
#include <assert.h>

void Repository::init()
{
	Bill b = Bill("E-On", "EED36677", 122.00, true);

	this->bills.push_back(b);

	b = Bill("Digi Sport", "0A33455X", 75.00, false);

	this->bills.push_back(b);

	b = Bill("Orange", "X990TTRR", 46.00, true);

	this->bills.push_back(b);

	b = Bill("Vodafone", "X990TTRR", 23.00, false);

	this->bills.push_back(b);

	b = Bill("Tcomm", "X990TTRR", 10.00, true);

	this->bills.push_back(b);
}

void Repository::readFromFile()
{
	std::fstream fin("bills.txt");

	char* p = new char[100];
	std::vector<char*> buffer;
	while (fin >> p)
	{
		strtok(p, ";");
		while (p != NULL)
			buffer.push_back(p);

		std::string isPaidString = buffer[3];
		bool isPaid;
		if (isPaidString == "true")
			isPaid = true;
		else
			isPaid = false;

		double sum;
		sscanf(buffer[2], "%f", &sum);

		Bill b = Bill(buffer[0], buffer[1], sum, isPaid);
		this->bills.push_back(b);
	}

}

void Repository::sortAll()
{
	Bill aux;
	for (int i = 0; i < this->bills.size() - 1; i++)
		for (int j = i + 1; j < this->bills.size(); j++)
			if (this->bills[i].sum > this->bills[j].sum)
			{
				aux = this->bills[i];
				this->bills[i] = this->bills[j];
				this->bills[j] = aux;
			}
}

double Repository::getTotal(std::string c)
{
	double total = 0;

	for (auto b : this->bills)
		if (b.company == c && b.isPaid == false)
			total = b.sum;

	return total;
}

void Repository::testTotal()
{
	Repository* repo = new Repository{};
	repo->init();

	assert(repo->getTotal("Digi Sport") == 75.00);
	assert(repo->getTotal("E-On") == 0);
	assert(repo->getTotal(" wefinwe") == 0);
}
#pragma once
#include <vector>
#include "Bill.h"

class Repository
{
public:
	std::vector<Bill> bills;

	Repository() { this->readFromFile(); /* this->init(); */};
	~Repository() {};

	void init();
	void readFromFile();
	/*
	Sorts all the bills
	input - 
	output - the vector of Bill type objects is sorted
	*/
	void sortAll();
	/*
	Computes the total of the unpaid bills for a company
	input - c, string representing the company name
	output - returns a double representing the total sum of the unpaid bills
	*/
	double getTotal(std::string c);
	static void testTotal();
};
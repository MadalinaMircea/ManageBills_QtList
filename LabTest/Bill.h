#pragma once
#include <string>

class Bill
{
public:
	std::string company, serial;
	double sum;
	bool isPaid;

	Bill() : company(""), serial(""), sum(0), isPaid(false) {}
	Bill(std::string c, std::string se, double su, bool i);
	~Bill() {};
};
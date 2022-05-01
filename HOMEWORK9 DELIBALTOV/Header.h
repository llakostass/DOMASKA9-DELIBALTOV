#ifndef PR_NASL
#define PR_NASL
#include<iostream>
using namespace std;

class Property {
private:
	double worth;
public:
	Property() {

	}
	Property(double temp_worth) {
		worth = temp_worth;
	}
	virtual double Nalog() = 0;
};

class Apartment : public Property{
private:
	double worth;
public:
	Apartment(double temp_worth) {
		worth = temp_worth;
	}
	double Nalog();
};

class Car : public Property {
private:
	double worth;
public:
	Car(double temp_worth) {
		worth = temp_worth;
	}
	double Nalog();
};

class CountryHouse : public Property {
private:
	double worth;
public:
	CountryHouse(double temp_worth) {
		worth = temp_worth;
	}
	double Nalog();
};
#endif 

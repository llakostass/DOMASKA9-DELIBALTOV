#include "Header.h"

double Apartment:: Nalog() {
	double nal = 0.001 * worth;
	return nal;
}

double Car::Nalog() {
	double nal = 0.005 * worth;
	return nal;
}

double CountryHouse::Nalog() {
	double nal = 0.002 * worth;
	return nal;
}
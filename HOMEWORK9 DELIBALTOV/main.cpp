#include "Header.h"

int main() {
	setlocale(LC_ALL, "RUS");

	const int SIZE = 7;
	Property *arr[7];
	arr[0] = new Apartment(14045364);
	arr[1] = new Apartment(21356346);
	arr[2] = new Apartment(17435436);
	arr[3] = new Car(2035563);
	arr[4] = new Car(1404536);
	arr[5] = new CountryHouse(5035646);
	arr[6] = new CountryHouse(4045636);
	for (int i = 0; i < SIZE; i++) {
		cout <<"Налог"<<i<<"-й "<<arr[i]->Nalog() << endl;
	}
	delete[] arr;
	return 0;
}
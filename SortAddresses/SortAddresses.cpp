﻿#include <iostream>
#include <string>
#include <fstream>

class address {
private:
	std::string city;
	std::string street;
	int house;
	int flat;

public:
	address(std::string city, std::string street, int house, int flat) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}

	address() {

	}

	void set_city(std::string City) {
		city = City;
	}

	void set_street(std::string Street) {
		street = Street;
	}

	void set_house(int House) {
		house = House;
	}

	void set_flat(int Flat) {
		flat = Flat;
	}


	std::string get_city() {
		return city;
	}

	std::string get_street() {
		return street;
	}

	int get_house() {
		return house;
	}

	int get_flat() {
		return flat;
	}
};


int main() {
	setlocale(LC_ALL, "Ru");
	std::ifstream file1("in.txt");
	std::ofstream file2("out.txt");

	int y;
	int x1, x2;
	std::string str1, str2;

	file1 >> y;
	std::cout << y << std::endl;

	address obj;
	address* ok = new address[y];

	for (int i = 0; i < y; i++) {
		file1 >> str1;
		obj.set_city(str1);

		file1 >> str2;
		obj.set_street(str2);

		file1 >> x1;
		obj.set_house(x1);

		file1 >> x2;
		obj.set_flat(x2);

		ok[i] = obj;
	}

	char arr[] = "а б в г д е ё ж з и й к л м н о п р с т у ф х ц ч ш щ ъ ы ь э ю я";

	int z = y * 2;
	int temp;

	for (int i = 0; i < z; i++) {
		for (int j = 0; j < z; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	
	
	file2 << y << std::endl;
	for (int i = 0; i < y; i++) {
		file2 << ok[i].get_city();
		file2 << ", ";
		file2 << ok[i].get_street();
		file2 << ", ";
		file2 << ok[i].get_house();
		file2 << ", ";
		file2 << ok[i].get_flat();
		file2 << std::endl;
	}
	return 0;
}
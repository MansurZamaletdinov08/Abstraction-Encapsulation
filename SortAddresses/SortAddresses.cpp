#include <iostream>
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
	int x1, x2, x3, x4;
	std::string str1, str2, str3, str4;

	file1 >> y;
	std::cout << y << std::endl;

	address obj;
	address* ok = new address[y];
	std::string temp1;
	std::string temp2;
	int z = y / 2;
	if (y % 2 != 0) {
		z = y / 2 + 1;
	}

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

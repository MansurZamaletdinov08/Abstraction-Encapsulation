#include <iostream>
#include <fstream>
#include <string>

class address {
public:
	std::string city;
	std::string street;
	int house;
	int flat;

	address(std::string city, std::string street, int house, int flat) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}

	std::string get_output_address(std::ifstream file, std::string str) {
		while (!file.eof()) {
			file >> str;
		}
	}
};

int main() {
	setlocale(LC_ALL, "Ru");
	std::ifstream file1("in.txt");
	std::ifstream file2("out.txt");
	std::string str;

	return 0;
}
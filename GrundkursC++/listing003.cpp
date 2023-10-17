// listings/002/listing002.cpp

#include <iostream>

int main() {
	int ival = 0;
	std::cout << "Bitte eine Ganzzahl: ";
	std::cin >> ival;
	std::cout << "Sie gaben die Zahl " << ival
			<< " ein" << std::endl;
	return 0;
}

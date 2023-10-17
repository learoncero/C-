//#include <iostream>
//
//// Volumen eines Zylinders berechnen -> V = Pi * r2 * h
//
//int main() {
//	const double pi = 3.141592;
//	double V = 0;
//	double r = 0;
//	double h = 0;
//
//	std::cout << "Volumenberechnung (Zylinder)\n";
//	std::cout << "Radius eingeben: ";
//	std::cin >> r;
//
//	if (std::cin.fail()) {
//		std::cerr << "Fehler bei der Eingabe\n";
//		return 1;
//	}
//
//	std::cout << "Hoehe eingeben: ";
//	std::cin >> h;
//	if (std::cin.fail()) {
//		std::cerr << "Fehler bei der Eingabe\n";
//		return 1;
//	}
//
//	V = r * r * pi * h;
//
//	std::cout << "Das Volumen betraegt: " << V << std::endl;
//
//	return 0;
//}
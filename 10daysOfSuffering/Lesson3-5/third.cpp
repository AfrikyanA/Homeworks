#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main () {
	
	
		setlocale(LC_ALL, "rus");
		
		const float P = 3.14;
		float r;
		cout << " Введите радиус круга для вычисления площади: ";
		cin >> r;
		float ploshad = P * (r * r) ;
		
		cout << endl << " Площадь вашего круга с радиусом " << r << " = " << ploshad << endl;
		cout << " Длина = " << 2 * P * r ;
	}

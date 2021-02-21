#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void area ( float radius,float Pi = 22/7 ){
	cout << "Perimetr= " << 2 * Pi * radius << endl;
	cout << "Ploshad= " << 2 * Pi * radius * radius;
	}
	
	
	int main () {
		
		float radius = 5.12;
		area (radius);
		
		}

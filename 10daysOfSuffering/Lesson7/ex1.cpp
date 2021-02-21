#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void area ( float radius, float Pi = 3.14) {
	
	cout << (4 * Pi * radius * radius * radius)/3;
	 
	}

void area ( float radius, float height, float Pi = 3.14){ 
	
	cout << Pi * radius * radius * height;
	
	}

int main () {
	
	float radius;
	cout << "Enter radius: ";
	cin >> radius;
	
	float height;
	cout << "Enter height: ";
	cin >> height;
	
	area(radius);
	}

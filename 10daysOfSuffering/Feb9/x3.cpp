#include <iostream>

using std::endl;
using std::cin;
using std::cout;

void foo( int num ) {
	
	if ( num < 0 ) return;
	cout << "\t" << num;
	foo ( --num );
	
	
	}
	
	int main () {
		
		int number;
		cout << "Enter a number: ";
		cin >> number;
		
			foo ( number );
		}

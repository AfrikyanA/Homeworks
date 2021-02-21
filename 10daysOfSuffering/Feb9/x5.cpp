#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int Fibonacci ( int x ) {
	
	if ( x <= 0 ) return 0;
	if ( x == 1 ) return 1;
	
	return Fibonacci ( x-1 ) + Fibonacci ( x-2 );
	
	}
	
	int main () {
		
		int number;
		cout << "Enter a number: ";
		cin >> number; cout << endl;
		
		
			cout << "Fibonacii N" << number << " = "<< Fibonacci ( number );
			cout << endl;
		}

#include <iostream>

using std::endl;
using std::cin;
using std::cout;


int main () {
	
		int number;
		cout << "Enter a number: ";
		cin >> number; cout << endl;
		
		int arr [number] = {1,1};

		
		for (int i = 2; i < number; ++i){
			
			arr[i] = arr [i-1] + arr [i-2];
			
			}
		cout << "Fibonacii N" << number << " = "<< arr [number-1] << endl;

}

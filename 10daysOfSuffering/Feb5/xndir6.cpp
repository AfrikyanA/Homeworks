#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int size;
	cout << " Enter size of first and second arrays: ";
	cin >> size;
	cout << endl;
	
	
	int arr1 [size] = {0}; 
	
			for ( int i = 0; i < size; ++i ) {
				cout << " Enter values of first array #" << i+1 << ": ";
				cin >> arr1[i];
			}
			cout << endl;
			
	int arr2 [size]; 
	
			for ( int i = 0; i < size; ++i ) {
				cout << " Enter values of second array #" << i+1 << ": ";
				cin >> arr2[i];
			}
			cout << endl;
	
	cout << " first and second arrays addition is: ";
	long arr3 [size];
	
			for ( int i = 0; i < size; ++i ) {
				arr3[i] = arr1[i] + arr2[i];
				cout << " \t " << arr3[i]; 
			}
			cout << endl;
}

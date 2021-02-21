#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
    
    int size;
	cout << " Enter size of array: ";
	cin >> size;
	
	
	int arr [size] = {0}; 
	
			for ( int i = 0; i < size; ++i ) {
			cout << " Enter value of array #" << i+1 << ": ";
			cin >> arr[i];
			}
	
			for ( int i = size-1; i >= 0; --i){
				cout << arr[i] << "\t";
				}
			
}

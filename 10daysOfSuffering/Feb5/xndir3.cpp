#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int size;
	cout << " Enter size of array: ";
	cin >> size;
	
	
	int arr [size];
	int max_index = 0;
	int min_index = 0; 
	
			for ( int i = 0; i < size; ++i ) {
			cout << " Enter value of array #" << i+1 << ": ";
			cin >> arr[i];
			}
			
			int max = arr [0];
			int min = arr [0];
			
			for ( int i = 0; i < size; ++i ){
				if ( max < arr[i] ){ 
					max = arr[i];
					max_index = i;     }
			}
			
			for ( int i = 0; i < size; ++i ){
				if ( min > arr[i] ){ 
					min = arr[i];
					min_index = i;     }
			}
			std::cout << " Minumum + maximum = " << arr[min_index] + arr[max_index];
}

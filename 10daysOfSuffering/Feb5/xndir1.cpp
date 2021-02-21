#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	
	int size;
	cout << " Enter size of array: ";
	cin >> size;
	
	
	int arr[size];
	int index = 0; 
	
			for ( int i = 0; i < size; ++i ) {
			cout << " Enter value of array #" << i+1 << ": ";
			cin >> arr[i];
			}
			 
			int max = arr [0];
			
			for ( int i = 0; i < size; ++i ){
				if ( max < arr[i] ){ 
					max = arr[i];
					index = i;    	   }
			}
		cout << " Max values index is: " << index;
}

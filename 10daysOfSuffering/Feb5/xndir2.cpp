#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void fillArr( int,int );


int main() {
	
	int size;
	cout << " Enter size of array: ";
	cin >> size;
	
	
	int arr [size];
	int index = 0; 
	
			for ( int i = 0; i < size; ++i ) {
			cout << " Enter value of array #" << i+1 << ": ";
			cin >> arr[i];
			}
			 
			int min = arr [0];
			
			for ( int i = 0; i < size; ++i ){
				if ( min > arr[i] ){ 
					min = arr[i];
					index = i;    	   }
			}
		cout << " Min values index is: " << index;
}

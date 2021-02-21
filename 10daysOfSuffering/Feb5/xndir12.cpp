#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main () {
		setlocale (LC_ALL, "rus");
		
    int size;
	cout << " Enter size of array: ";
	cin >> size;
	
	
	int arr [size] = {0};
	int countKent = 0;
	
			for ( int i = 0; i < size; ++i ) {
				cout << " Enter value of array #" << i+1 << ": ";
				cin >> arr[i];
				
				if ( arr[i] % 2 == 0 )
					++countKent;
			
			}
				
			cout << "Число четных чисел в массиве = " << countKent;	
		
	}

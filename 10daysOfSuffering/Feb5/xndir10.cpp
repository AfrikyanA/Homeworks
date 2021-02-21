#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {
	
	int size;
	cout << "Enter size of square matrix: ";
	cin >> size;
	
	int arr[size][size] = {0};
	
		for ( int i = 0; i < size; ++i ) {
				for ( int j = 0; j < size; ++j ){
					cout << "Enter value [" << i << "][" << j << "]: ";
					cin >> arr[i][j];
					
				
				}	
				cout << endl;	
					
		}
		for ( int ix = 0, i = size-1, j = 0; ix < 3, i >= 0; --i, ++j, ++ix ){
			std::swap(arr[ix][ix], arr[i][j]);
			}
		cout << arr[2][2];
}		

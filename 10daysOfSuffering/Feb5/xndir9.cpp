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
		
		int arrGlux[size] = {0}
		
		for ( int i = 0; i < size; ++i ) {
				for ( int j = 0; j < size; ++j ){
					if ( i == j )
							arrGlux[i] = arr[i][i];  	
				}
		}
		
			cout << "Glxavor + Ojandak = ";
		for ( int row = 0, col = size-1; row < size; ++row, --col ){
							cout << "\t" << ( arrGlux[row] + arr[row][col] );
						}	
		
		
		
		
		
		
		
		
			
	
}

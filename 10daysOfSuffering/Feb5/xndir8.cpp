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
					
			for ( int i = 0, j = size-1; i < size; ++i, --j )
						cout << "\t" << arr[i][j];
					
					
		
		
			
}

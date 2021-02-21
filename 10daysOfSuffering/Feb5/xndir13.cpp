#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main() {

	int size;
	cout << "Enter size of square matrix: ";
	cin >> size;
	if ( size > 0 ) {
	int arr[size][size] = {0};

		for ( int i = 0; i < size; ++i ) {
				for ( int j = 0; j < size; ++j ){
					cout << "Enter value [" << i << "][" << j << "]: ";
					cin >> arr[i][j];


				}
				cout << endl;

		}

		int artagrvacArr[ size * size ] = {0} ;
		int row = 0;

		for ( int i = 0; i < size; ++i, ++row ) {
				for ( int j = 0; j < size; ++j, ++row ){
					artagrvacArr[row] = arr[i][j];
					cout << "\t" << artagrvacArr[row];
				}

		}




	}
}

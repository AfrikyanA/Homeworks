#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main () {
		setlocale (LC_ALL, "rus");
		
    int size;
	cout << " Enter size of array: ";
	cin >> size;
	
	int sum = 0;
	int mul = 1;
	
	int arr [size] = {0};
	
			for ( int i = 0; i < size; ++i ) {
				cout << " Enter value of array #" << i+1 << ": ";
				cin >> arr[i];
				
				sum += arr[i];
				mul *= arr[i];
			}
				cout << endl ;
				cout << " Gumari ev artadryali mijin tvabanakan@: " << (sum + mul)/2 ;

		
}

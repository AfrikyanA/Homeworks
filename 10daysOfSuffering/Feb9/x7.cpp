#include <iostream>

using std::endl;
using std::cin;
using std::cout;


void Rek( int* arr, int size ) {
	
	if (size <= 0) return;
	cout << *arr++;	 
	Rek(arr, --size); 


	
	}
	
	
	int main () {
		
		int arr[5] = {1,2,3,4,5};
		
		Rek(arr,5);
		
		}

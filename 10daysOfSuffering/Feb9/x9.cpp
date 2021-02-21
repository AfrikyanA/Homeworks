#include <iostream>
#include <cstring>

using std::endl;
using std::cin;
using std::cout;
using std::string;


void remove(int*& arr, int index, int size){
	
	int* tmp = new int[size-1];
	
	for(int i = 0, j=0; i < size; ++i, ++j) {
		if( i == index ) ++i;
		tmp[j] = arr[i];
	}
	
	delete[] arr;
	arr = tmp;
	
	
	}
	
	
	
int main () {
	
		int* arr = new int[5]{1,2,3,4,5};
		remove(arr,3,5);
				
	}

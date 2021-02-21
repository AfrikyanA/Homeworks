#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int main () {
	
	int N;
	cout << "Enter value: ";
	cin >> N;
	int fak = 1;
	
	for (int i = 1; i <= N; ++i){
		
		fak *= i;
		  
		} 
		cout << fak << endl;
	}

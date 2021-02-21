#include <iostream>
#include <cstring>

using std::endl;
using std::cin;
using std::cout;
using std::string;


int* PrintK ( int* number, int k ) {
		
		string tmp = std::to_string(*number);
		string numberB = "" ;
		 
		for ( int i = 0; i < k; ++i ) {
			
			numberB[i] = tmp[i];
			
			}
			
		*number = std::stoi(numberB);
		return number;
	}
	
	
	int main() {
		
		int N;
		cout << "Enter number: "; cin >> N;
		int k;
		cout << "Enter K: "; cin >> k;
		
		PrintK ( &N, k );
		cout << N ; 		
		}

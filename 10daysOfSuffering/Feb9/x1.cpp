#include <iostream>

using std::endl;
using std::cin;
using std::cout;

int fak(int x) {
	
	if (x <= 1) return 1;
	
	return x * fak (x-1);
	
	}
	
	int main () {
		
		int x = 5;
		cout << x << "!= " << fak(x) << endl;
		
		
}

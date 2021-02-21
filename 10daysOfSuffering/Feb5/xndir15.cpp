#include <iostream>
#include <cstring>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main () {
	
	char maxKrknvox = 'A';
	int tmp = 0;
	int count = 0;;
	
    string tox;
    cout << "Nermuceq tox: ";
    cin >> tox;
     
    for ( int i = 0; i < (int)tox.length(); ++i){			  
		  
			if( tox[i] == tox[i + 1] ) {
				++tmp;
				 }
				 
				else tmp = 0;		// zroacnuma ete chi krknvum
				
			if	(tmp > count) {
				count = tmp;
				maxKrknvox = tox[i];
				} 
				
		}		cout << "Amenashat krknvox symbolneri hertakanutyun@ barum: ";
				for ( int i = 0; i <= count; ++i ) 
					cout << maxKrknvox;
			
}

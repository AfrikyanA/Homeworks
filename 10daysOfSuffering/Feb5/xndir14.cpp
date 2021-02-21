#include <iostream>
#include <cstring>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main () {
	
	int maxCount = 0;
	int tmp = 0;
	char maxKrknvox = 'A';
	char tmpCh = 'a';
	
	
    string tox;
    cout << "Nermuceq tox: ";
    getline(cin,tox);
     
    for ( unsigned int i = 0; i < tox.length()-1; ++i )			  
		for ( unsigned int j = 0; j < tox.length()-2; ++j ){		 
			if(tox[i] == tox[j+1]){									 				
				++tmp;
				tmpCh = tox[j];
				}
					
		if ( tmp > maxCount ){
			maxCount = tmp;
			tmp = 0;
			maxKrknvox = tmpCh;
			}	
		}

	cout << "Toxi amenashat krknvox simvol@ ` " <<  maxKrknvox << endl ;
	if ( maxKrknvox == ' ' ) cout << "Ete ban chi erevum uremn prabelna.";


}

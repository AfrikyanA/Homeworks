#include <iostream>
#include <cstring>
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main () {
	
	string str;
    cout << "Nermuceq tox: ";
    getline(cin,str);
    
		cout << "Toxi mji tvernen: ";
		for ( int i = 0 ; i < (int)str.length(); ++i ){
			if ( isdigit(str[i]) ) { 
				cout << str[i]; 
			}
			
		}
		cout << endl;
}

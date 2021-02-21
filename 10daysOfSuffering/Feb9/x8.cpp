#include <iostream>
#include <cstring>

using std::endl;
using std::cin;
using std::cout;
using std::string;

string* revStr (string* name) {
			
		string name2 = *name;
		// *name = "";  // es tox@ chem grum ashxatuma  
		
		for ( unsigned int i = 0; i < name2.length(); ++i ){
		
				(*name)[i] = name2[name2.length()-1-i];
				
			}
			
			return name;
	}

 
 
int main() {
	
	string tox = "";
	cout << "Enter string: ";
	getline(cin,tox);

	cout << "Reverse string: " << *revStr( &tox );   
	
	
	
	}

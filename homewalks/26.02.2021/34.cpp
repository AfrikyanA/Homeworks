#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


struct Student {
	
	string name;
	string lastName;
	int age;
	vector<string> obName;

};

void  ~Student(Student* this){}

void   Student(Student* this){

	this->name = "";
	this->lastName = "";
	this->age = ;
}

void setgetStudent(Student* this, Student& ob){
	
	int count = 0;
	
	operator<< (cout, "Enter name: "); 
	operator>> (cin, this->name);
	operator<< (cout, "Enter lastname: "); 
	operator>> (cin, this->lastName);
	operator<< (cout, "Enter age: "); 
	operator>> (cin, this->age);
	operator<< (cout, "Enter number of objects(items): "); 
	operator>> (cin, count);

	
	for(int i = 0; i < count; ++i){
		
		this->obName.push_back("mateeeeem");
		operator<< (cout, "Enter name of #" << i+1 << " item: ");
		operator>> (cin, this->obName[i]);						
	}
	operator<< (cout, endl);
}

int main(){

	Student ashot;
	
	setgetStudent(&ashot, ashot);
	
	~Student(&ashot);
}

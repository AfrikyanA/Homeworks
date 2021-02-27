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

void sgeterXary(Student& thisA, Student& thisB, Student& thisC, const Student& a, const Student& b){
			
	operator<< (cout, (thisC->name = thisA->name));
	operator<< (cout, (thisC->lastName = thisB->lastName));
	operator<< (cout, (thisC->age = (thisA->age + thisB->age)/2));
		
	int count;
	operator<< (cout, "Enter number of objects(items): ";
	operator>> (cin, count);
		
	for(int i = 0; i < count; ++i){
		
		thisC->obName.push_back("mateeeeem");
		operator<< (cout, "Enter name of #" );
		operator>> (cin, thisC->obName[i]);						
	}
}

int main(){

	Student ashot;
	Student norik;
	Student vachagan;
	
	setgetStudent(&ashot, ashot);
	setgetStudent(&norik, norik);
	sgeterXary(&ashot, &norik, &vachagan, ashot, norik);
	
	~Student(&vachagan);
	~Student(&norik);
	~Student(&ashot);
}

#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

class Student {
		
	private:
		string m_name;
		string m_lastName;
		int m_age;
		vector<string> m_obName;
	public: 
	   ~Student(){};
		Student(){
			m_name = "";
			m_lastName = "";
			m_age = 0;
		}
		void setgetStudent(Student& a){
			int count = 0;
			cout << "Enter name: "; cin >> a.m_name;
			cout << "Enter lastname: "; cin >> a.m_lastName;
			cout << "Enter age: "; cin >> a.m_age;
	
			cout << "Enter number of objects(items): "; cin >> count;
		
			for(int i = 0; i < count; ++i){
				a.m_obName.push_back("mateeeeem");
				cout << "Enter name of #" << i+1 << " item: ";
				cin >> a.m_obName[i];						
			}
		}


};

int main(){
	
	Student ashot;
	
	ashot.setgetStudent(ashot);
	
	}

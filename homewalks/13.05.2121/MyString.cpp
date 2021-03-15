#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;


class MyString {
public:
  MyString():ptr(nullptr), size(0){}
 ~MyString(){delete[] ptr; ptr=nullptr;}
  MyString(const char*);
  MyString(const MyString&);
  void operator=(const MyString&);
  void print();
private:
  char* ptr;
  int size;
};

MyString:: MyString(const MyString& oth){
  size = oth.size;
  ptr = new char[oth.size];
  for(int i = 0; i < oth.size; ++i){
    ptr[i] = oth.ptr[i];
  }
}

void MyString:: operator=(const MyString& oth){
  size = oth.size;
  if(ptr != nullptr) delete[] ptr;
  ptr = new char[oth.size];
  for(int i = 0; i < oth.size; ++i){
    ptr[i] = oth.ptr[i];
  }
}

void MyString:: print(){
  cout << ptr << endl;;
}

MyString:: MyString(const char* ch){
  int chSize = sizeof(ch);
  ptr = new char[chSize];
  for(int i = 0; i < chSize; ++i){
    ptr[i] = ch[i];
  }
}

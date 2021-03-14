#include <iostream>
#include <vector>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;


template <typename T>
class MyVector{
public:
  MyVector():arr(new T[1]), size(0), capacity(2){}
  MyVector(const MyVector& );
  ~MyVector(){delete[] arr; arr = nullptr;}
  void push_back(T);
  void push(T,int);
  T pop_back();
  T pop(int);
  void extend();
  void display();
  T getI(int index){return arr[index];};

  T* operator=(const MyVector<T>& oth){ //dont work shxtayakan
    size = oth.size;
    capacity = oth.capacity;
    delete[] arr;
    arr = new T[oth.size];
    for(int i = 0; i < oth.size; ++i){
      arr[i] = oth.arr[i];
    }
    return arr;
  }
  
private:
  T* arr;
  int size;
  int capacity;
};



template <typename T>                           
MyVector<T>::MyVector(const MyVector<T> &oth){
  arr = new T[oth.size];
  size = oth.size;
  capacity = oth.capacity;
  for(int i = 0; i < oth.size; ++i){
    arr[i] = oth.arr[i];
  }
}

template <typename T>
void MyVector<T>:: display(){
  if(size == 0) cout << "Vector is empty" << endl;
  else{
    for(int i = 0; i < size; ++i){
      cout << arr[i] << endl;
    }
  }
}

template <typename T>
void MyVector<T>:: extend(){
  T* tmp = new T[2 * capacity];
  for(int i = 0; i < size; ++i){
    tmp[i] = arr[i];
  }
  delete[] arr;
  arr = tmp;
  capacity *= 2;
}

template <typename T>
void MyVector<T>:: push_back(T el){
  if(size == capacity){
    extend();
  }
  arr[size++] = el;
}

template <typename T>
void MyVector<T>:: push(T el, int index){
  if(index > size || index < 0){
    cout << "NO" << endl; return;
  }
  if(size == capacity){
    extend();
  }
  if(size == index){
    arr[size++] = el;
    return;
  }
  T* tmp = new T[++size];
  for(int i = 0; i < size; ++i){
    if(i == index) ++i;
    tmp[i] = arr[i];
  }
  tmp[index] = el;
  delete[] arr;
  arr = tmp;
}

template <typename T>
T MyVector<T>:: pop_back(){
  if(size == 0){
    cout << "Error size cant be < 0 !" << endl;
    return (T)-1;
  }
  return arr[size--];
}

template <typename T>
T MyVector<T>:: pop(int index){
  if(index > size || index < 0){
    cout << "NO" << endl; return (T)-1;
  }
  if(size == 0) return (T)-1;
  if(size == index) {
    size--;
    return arr[index];
  }
  T* tmp = new T[--size];
  for(int i = 0; i < size; ++i){
    if(i == index) tmp[i] = arr[++i];
    else tmp[i] = arr[i];
  }
  delete[] arr;
  arr = tmp;

  return arr[index];
}

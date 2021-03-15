#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename T>
class MyStack {

	public:
		MyStack():LIMIT(100), top(0){}
		void push(T);
		T pop();
		void display();
	private:
		const int LIMIT;
		int top;
		T stack[100];

};


template <typename T>
void MyStack<T>:: push(T element){
	if(top == 99){
	cout << "Stack overflow" << endl;
	}
	else{
		stack[top++] = element;
	}
}

template <typename T>
T MyStack<T>:: pop(){
	if(top == 0){
		cout << "Stack underflow" << endl;
	}
	else return stack[top--];
}

template <typename T>
void MyStack<T>:: display(){
	if(top < 1){
	cout << "Stack is empty" << endl;
	}
	else{
		cout << "The elements of the stack are" << endl;
		for(int i = top-1; i >= 0; --i){
			cout << stack[i] << endl;
		}
	}

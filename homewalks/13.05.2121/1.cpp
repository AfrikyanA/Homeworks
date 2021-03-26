#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename T>
class List
{	
public:
	T data;
	List<T>* next;
   ~List(){delete next;}
	void insert(T val, int pos, List<T>* head);
	void push_front(T val, List<T>* head);
	void print(const List<T>* head);
};


template <typename T>
void List<T>::push_front(T val, List<T>* head)
{
	if(head == nullptr)
	{
		List<T>* newEl = new List<T>;
		newEl->data = val;
		head = newEl;
	}
	else{
	List<T>* newEl = new List<T>;
	newEl->data = val;
	newEl->next = head;
	head = newEl;
	}
}


template <typename T>
void print(List<T>* head)
{
	List<T>* hed = head;
	while (hed){
		cout << hed->data << endl;
		hed = hed->next;
	}
}


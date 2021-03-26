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
	void insert(T val, List<T>* prev);
	void push_front(T val, List<T>** head);
	void push_back(T val, List<T>** head);
	void print(const List<T>* head);
};


template <typename T>
void List<T>::insert(T val, List<T>* prev)
{
	if(prev == nullptr){
		cout << "No" << endl;
		return;
	}
	
	List<T>* newEl = new List<T>;
	newEl->data = val;
	newEl->next = prev->next;
	prev->next = newEl;
}


template <typename T>
void List<T>::push_front(T val, List<T>** head)
{
	if(head == nullptr)
	{
		List<T>* newEl = new List<T>;
		newEl->data = val;
		newEl->next = nullptr;
		*head = newEl;
	}
	else{
	List<T>* newEl = new List<T>;
	newEl->data = val;
	newEl->next = *head;
	*head = newEl;
	}
}

template <typename T>
void List<T>::push_back(T val, List<T>** head)
{
	List<T>* newEl = new List<T>;
	newEl->data = val;
	newEl->next = nullptr;
	
	if(*head == nullptr){
		*head = newEl;
		return;
	}
	List<T>* tmp = *head;
	
	while(tmp->next){
		tmp = tmp->next;
	}
	
	tmp->next = newEl;
	return;
}



template <typename T>
void print(List<T>* head)
{
	while (head){
		cout << head->data << endl;
		head = head->next;
	}
}

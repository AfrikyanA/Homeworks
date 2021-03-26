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
	void insert(T val, int pos, List<T>* head)
	void push_front(T val, List<T>* head);
	void print(const List<T>* head);
};


template <typename T>
void List<T>::push_front(T val, List<T>* head)
{
	List<T>* tmp = head;
	head->next = new List<T>;
	head->next->data = val;
	head->next->next = tmp;
	
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


int main()
{
	List<int>* head = new List<int>;
	head->data = 4;
	head->next = new List<int>;
	head->next->data = 7;
	head->next->next = nullptr;
	
	cout << head->next->data;
}
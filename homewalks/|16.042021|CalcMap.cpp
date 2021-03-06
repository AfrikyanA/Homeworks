#include <iostream>
#include <iterator>
#include <map>


int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int division(int a, int b)
{
	return a / b;
}


int main()
{	
	std::map<char, int (*)(int,int)> ops;
	ops.emplace('+', sum);
	ops.emplace('-', sub);
	ops.emplace('*', mul);
	ops.emplace('/', division);

while(1)
{	
	char choice;
	std::cout << "Enter operation:(q for quit) ";
	std::cin >> choice;
	
	if (choice == 'q') break;
	
	if (ops.find(choice) == ops.end()){
		std::cout << "Available operations +,-,*,/ ";
		//
	}
	
	int a, b;
	std::cout << "Enter first value: ";
	std::cin >> a;
	std::cout << "Enter second value: ";
	std::cin >> b;
	
	std::cout << ops[choice](a,b) << std::endl;

} //while
}


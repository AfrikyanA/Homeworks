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
	
repeat:
	char choice;
	std::cout << "Enter operation:(q for quit) ";
	std::cin >> choice;
	
	if (choice == 'q') return 0;
	
	if (ops.find(choice) == ops.end()){
		std::cout << "Available operations +,-,*,/ ";
		goto repeat;
	}
	
	int a, b;
	std::cout << "Enter first value: ";
	std::cin >> a;
	std::cout << "Enter second value: ";
	std::cin >> b;
	
	std::cout << ops[choice](a,b) << std::endl;
	goto repeat;
}


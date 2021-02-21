#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {

    setlocale(LC_ALL, "rus");

    bool firstValue = 0;
    bool secondValue = 0;
    cout << "Введите 2 числа ( 1 или 0 ):";
    cin >> firstValue >> secondValue;


    cout << firstValue << " and " << secondValue << " = " << ( firstValue && secondValue ) << endl;
    cout << firstValue << " or " << secondValue << " = " << ( firstValue || secondValue ) << endl;
    cout << firstValue << " XOR " << secondValue << " = " << ( firstValue ^ secondValue ) << endl;



}

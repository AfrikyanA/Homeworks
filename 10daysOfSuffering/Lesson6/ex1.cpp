#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {

    int arr[5] = {0};

    for ( int i = 5-1; i >= 0; --i ) {
      cout << "\t" << arr[i];
    }
    cout << endl ;

}

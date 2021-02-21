#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main () {

    int how = 0;
    cout << "How much fibonacci you want: ";
    cin >> how;

    int Fib [ how ] = { 0, 1 };
      for ( int i = 2; i < how; ++i ){
          Fib[i] = Fib[i-1] + Fib[i-2];
      }

      for ( int i = 0; i < how ; ++i )
        cout << "Fibonacci #" << i+1 << " = " << Fib[i] << endl;

}

#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int main () {

  enum rainbow {
  red = 0,
  orange,
  purple,
  yellow,
  green,
  blue,
  indigo,
  violet

  };


  int yourColor;
  cout << " Choose color 0-6: ";
  cin >> yourColor;                             //endlner@ moracel em

    switch (yourColor) {
      case red:
        cout << "This color is in rainbow";
        break;
      case orange:
        cout << "This color is in rainbow";
        break;
      case purple:
        cout << "This color is in rainbow";
        break;
      case yellow:
        cout << "This color is in rainbow";
        break;
      case green:
        cout << "This color is in rainbow";
        break;
      case blue:
        cout << "This color is in rainbow";
        break;
      case indigo:
        cout << "This color is in rainbow";
        break;
      case violet:
        cout << "This color is in rainbow";
        break;
      default:
        cout << "Novu";
        break;

    }

}

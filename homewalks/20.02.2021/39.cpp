#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;


class Calc{
	
	public:
		template <typename T, typename TT>
		void Sum(const T a, const TT b){
			cout <<  a + b << endl;
			}
		template <typename T, typename TT>
		void Sub(const T a, const TT b){
			cout << a - b << endl;
			}
		template <typename T, typename TT>
		void Div(const T a, const TT b){
			if(b == 0) { 
				cout << "Nilzya" << endl;
				return;
			}
			cout << a / b << endl;
			}
		template <typename T, typename TT>
		void DivWithoutRem(const T a, const TT b){
			if(b == 0) { 
				cout << "Nilzya" << endl;
				return;
			}
			cout << int(a / b) << endl;
			}
		template <typename T, typename TT>
		void Mul(const T a, const TT b){
			cout << a * b << endl;
			}
		template <typename T, typename TT>
		void Persentage(const T a, const TT b){
			if(b == 0) { 
				cout << "Nilzya" << endl;
				return;
			}
			double P = (b/100);
			cout << P;
			cout <<  P * a << endl;
			}
};
	
int main() {
	Calc test;
	test.Sum(5.5000, -5);		     //  0.5
	test.Sub(5000, -55.7);		    //   5055.7
	test.Div(555.1, 00);		   //    Nilzya
	test.Mul(50, 0.54);           //     27
	test.Persentage(1000, 10.5); //	     0.105105   
	
	}




#include <iostream>
using namespace std;
int main()
{
	int num1, num2;
	char op;
	cin >> num1 >> num2;
	cin >> op;
	switch (op)
	{
		case '+':
		 cout << endl << num1 << " + " <<
		 num2 << " = " << num1+num2;
		 break;
		 case '-':
		 cout << endl << num1 << " - " << num2
		 << " = " << num1-num2;
		 break;
		 case '*':
		 cout << endl << num1 << " * " << num2
		 << " = " << num1*num2;
		 break;
		 case '/':
		cout.setf(ios::fixed);

		cout.setf(ios::showpoint);

		cout.precision(2);
		cout << endl << num1 << " / " << num2
		<< " = " << (double)num1/num2;
		break;
		default:
		cout << "ERROR";
		}
		return 0;
}
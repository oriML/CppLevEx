#include <iostream>

using namespace std;

void printABs(int n)
{
	if(n!=0)
	{cout << "a";
	n--;
	printABs(n);
	cout<<"b";}
	
}
int main()
{
	int num;
	cout << "enter a number:" << endl;
	cin >> num;
	printABs(num);
	return 0;

	
	return 0;
}
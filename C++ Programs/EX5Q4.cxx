#include <iostream>
#include <time.h>
using namespace std;
bool isPrime(int num)
{
	for (int i=2 ; i<=num-1; i++)
	{
		if(num%i ==0)
		return false;
	}
	return true;
}

int findPrime(int M)
{
	int y=M;
	bool v=false;
	while (v==false)
	{
		if (isPrime(y)==true)
		{
			v=true;
		}
		else
		y++;
	}
	return y;
	
}

int main()
{
	int n;
	srand(time(NULL));
	int r = (rand()%100);
	if(r<10)
	r += (10-r);
	cout << "enter number of values:" <<
	endl;
	cin >> n;
	if (n>0)
	{
		cout << "table size: " << findPrime(n);
	}
	else
	cout << "table size: " << findPrime(r);
	
	
	return 0;
	
}
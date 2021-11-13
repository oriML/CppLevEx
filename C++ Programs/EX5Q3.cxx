#include <iostream>
using namespace std;

int sumDigits(int num)
{
	int sum=0;
	while (num>0)
	{
		sum +=num%10;
		num/=10;
		
	}
	return sum;
}

int lastDigitID(int N)
{
	int sumWO=0, sumE=0, OddD=0,X=N;
	while(X>0)
	{
		OddD=(X%10)*2;
		if(OddD > 10)
		sumWO += sumDigits(OddD);
		else
		sumWO+=OddD;
	
		X/=100;
	}
	X=N/10;
	while(X>0)
	{
		sumE += X%10;
		X/=100;
	}
	sumE+=sumWO;
	int w =(10-(sumE%10));
	return w;
	
}

int main()
{
	int n;
	cout << "enter a number:" << endl;
	cin >> n;
	cout << lastDigitID(n);
	
	
	
	return 0;
	
}
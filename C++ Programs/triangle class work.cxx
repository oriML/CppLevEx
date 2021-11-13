#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	
	int N, i, k, j;
	cout << "enter a one digit number:" << endl;
	cin >> N;
	while(N<1 || N>9)
	{
		cout << "ERROR" << endl;
		cin >> N;
	}
	k=N;
	for (i = 1; i <= N; i++)
	{
		for (j = k; j >= 1; j--)
		{
			cout << j;
			if (j==1)
			cout << "  ";
			else
			cout << ",  ";
		}
		k--;
		cout << endl;
		for (int y = 0; y <i; y++)
		{
//if(k>10)
//cout << "     ";
//else
			cout << "    ";
//taking space according to the number of chars used for presenting the first upper number//
		}
		
	
	}
	return 0;
}
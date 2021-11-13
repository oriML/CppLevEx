#include <iostream>
using namespace std;
bool Perfect(int num)
{
	int sum=0;
	for (int i=1 ; i<=num-1; i++)
	{
		if(num%i ==0)
		sum+=i;
	}
	if (sum == num)
	return true;
	else
	return false;
}

int printPerfect(int M)
{
	for (int y=1; y<=M; y++)
	{
		if (Perfect(y) == true)
		{
			cout << y << " ";
			
		}
	}
	
	if(M == NULL)
	{
		for (int z=1; z<=500; z++)
	{
		if (Perfect(z) == true)
		{
			cout << z << " ";
		}
	}
	}
 return (NULL);
	
}

int main()
{
	int n;
	cout << "enter a number:";"
	cin >> n;
	cout << printPerfect(n);
	
	
	return 0;
	
}
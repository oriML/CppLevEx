#include <iostream>
using namespace std;

int CompareArray(int V1[], int S1, int V2[], int S2)
{
	bool flag = true;
	int counter = 0;
	if (S2 > 1)
	{
		for (int j = 1; j <= S1; j++)
		{
			int s=j;
			for (int i = 1; i <= S2; i++)
			{
				if (V1[j] != V2[i])
				{
					flag = false;
				}
				j++;
			}
			if (flag !=false)
			{counter++;}
			j =s;
			flag=true;
		}
	}
	else
	{
		for (int j = 1; j <= S1; j++)
		{
			if (V1[j] != V2[1])
			{
				flag = false;
			}
			if (flag != false)
			{
				counter++;
			}
			flag = true;
		}
	}
	return counter;
}
int main()
{
	int Size1, Size2;
	int vector1[Size1], vector2[Size2];
	cout << "enter size of first array:" << endl;
	cin >> Size1;
	while (Size1 > 500 || Size1 < 0)
	{
		cout << "ERROR" << endl;
		cin >> Size1;
	}
	cout << "enter first array values:" << endl;
	for (int i = 1; i <= Size1; i++)
	{
		cin >> vector1[i];
	}
	cout << "enter size of second array:" << endl;
	cin >> Size2;
	while (Size2 > 100 || Size2 < 0)
	{
		cout << "ERROR" << endl;
		cin >> Size2;
	}
	cout << "enter second array values:"
		 << endl;
	for (int y = 1; y <= Size2; y++)
	{
		cin >> vector2[y];
	}

	cout << CompareArray(vector1, Size1, vector2, Size2) << endl;

	return 0;
}
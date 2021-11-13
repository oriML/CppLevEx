#include <iostream>
using namespace std;

//check if the array is sorted descending
bool sortArr( int a[],  int S)
{
	for (int i = 1; i < S; i++)
	{
		if (a[i - 1] >= a[i])
			return false;
	}
	return true;
}
//add organs to the array by demand
void ArrPoint(int a[])
{
	int size = 1, num;
	bool f = false;
	while (f == false)
	{
		for (int i = 0; i < size; i++)
		{
			cin >> num;
			if (num == 0)
			{
				break;
			}
			else
			{
				a[i] = num;
				size += 1;
			}
		}
		if (sortArr(a, size) == false)
		{cout << "ERROR\n";
		f = false;}
		else
		{f = true;}
	}
}
int main()
{
	int arr1[1], arr2[1], arr3[1];
	cout << "enter values for the first vector:\n";
	ArrPoint(arr1);
	cout << "enter values for the second vector:\n";
	ArrPoint(arr2);
	cout << "enter values for the first vector:\n";
	ArrPoint(arr3);

	cout << arr2;
}
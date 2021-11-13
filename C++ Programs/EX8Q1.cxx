#include <iostream>
using namespace std;
int binS(const int a[], const int size, int n)
{
	int beg =0, end=size,  mid;
	while(beg<=end)
		{
			mid =(beg+end)/2;
			if(n>a[mid])
			beg = mid+1;
			else if(n<a[mid])
			end=mid-1;
			else
			return mid;
		}
		return -1;
}
int main()
{
	int size=10;
	int arr[size];
	bool flag = false, v=true;
	cout << "enter 10 numbers" << endl;
	while (flag == false)
	{
		cin >> arr[0];
		for (int i = 0; i < 9; i++)
		{
			cin >> arr[i + 1];
			if (arr[i + 1] <= arr[i])
				v = false;
		}
		if (v == true)
			flag = true;
		if (flag == false)
			cout << "ERROR\n";
	}
	cout << "enter 1 number:\n";
	int num;
	cin >> num;
	int Bin= binS(arr,size,num);
	if(Bin>=0)
	cout << "the number " << num << " was found at index " << Bin;
	else
	cout << "not found";
}
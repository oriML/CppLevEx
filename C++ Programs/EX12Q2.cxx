//EX12Q2 ORI MENACHEM LEVI
#include <iostream>
using namespace std;

int smallest(int *arr, int size)
{
	static int temp = 0;
	if(size==1){return size;}
	else
	smallest(arr, size-1);
	if(arr[temp]>arr[size-1])
	temp=size-1;
	return temp;
}
int main() 

{

	int* arr;
	int num;

	do {

		cout << "enter a number:" << endl;

		cin >> num;

		if (num <= 0)

			cout << "ERROR" << endl;

	} while (num <= 0);

	arr = new int[num];

	cout << "enter array values: ";

	for (int i = 0; i < num; i++)
	cin >> arr[i];

	cout << "the smallest is: " << arr[smallest(arr, num)] << endl;

	delete[] arr;

	//system("pause");

	return 0;

}
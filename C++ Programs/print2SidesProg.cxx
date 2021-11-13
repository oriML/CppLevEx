//EX12Q3 ORI MENACHEM LEVI
#include <iostream>
using namespace std;
int print(int)
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

	cout << "before: " << endl;
	for (int i = 0; i < num; i++)
	cout<<  arr[i]<<" ";
	sort(arr,num);
	cout<<endl;
	cout << "after: " << endl;
	for (int i = 0; i < num; i++)
	cout<<  arr[i]<<" ";
	delete[] arr;

	//system("pause");

	return 0;

}
int smallest(int *arr, int size)//returns index
{
	static int temp = 0;
	if(size==1){return size;}
	else
	smallest(arr, size-1);
	if(arr[temp]>arr[size-1])
	temp=size-1;
	return temp;
}
void swap(int*arr,int i,int j)
{
	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
int sort(int *arr,int size)
{
	static int t=size;
		if (size !=1)
		{sort(arr,size-1);}
		swap(arr,size-1,smallest(arr,t));
		
		return 0;
}

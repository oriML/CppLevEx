#include <cstring>
#include <iostream>
#include <string>
using namespace std;
void reverse(char* arr[]) 
{
	int size=0;
	while(*arr[size]!= '\0')
	size++;
	char* h=new char[size];
	int cntr1=0,cntr2=0;
	for(int i=0;i<size-1;i++)
	{
		while(*arr[cntr1]!= ' ')
		{
			h[cntr2]= *arr[cntr1];
			cntr1++;
			cntr2++;
		}//creats new arr of one word
		if(*arr[cntr1]!=' ')
		{int num=cntr2;
		for(int y=0;y<cntr2;y++)
		{
			*arr[num]=h[y];
			num--;
		}
		}
		while(*arr[cntr1]==' ')
		cntr1++;
		
		cntr2=0;
		h[size]={0};
	}
	for(int i=0;i<size-1;i++)
	*arr[i]=h[i];

}
int main()
{
	int size;
	char* arr= new char [size];
	for(int i=0;i<size-1;i++)
	{
		cin >> arr[i];
		size++;
	}
	reverse(arr);
	for(int i=0;i<size-1;i++)
	{
		cout<<arr[i];
	}
}
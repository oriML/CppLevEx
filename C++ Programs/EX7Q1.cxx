#include <iostream>
using namespace std;

int CheckArray(int M[])
{
	int M2[15];
		for (int g=0; g<15; g++)
		M2[g]=g+1;
	
	for (int y=0; y<15;y++)
	{
		for (int j=0; j<15; j++)
		if(M[y]==M2[j])
		{
			M2[j]=0;
		}
	}
		for (int v=0; v<15; v++)
		{
			if(M2[v]!=0)
			return false;
		}
	return true;
}
int main()
{
	int MainA[15];
	cout << "enter 15 numbers:";
	for(int i =0; i<15;i++)
	{
		cin >> MainA[i];
	}
	if(CheckArray( MainA)==true)
	cout<< "-15-";
	else
	cout << "- - -";
	
	return 0;
	
}
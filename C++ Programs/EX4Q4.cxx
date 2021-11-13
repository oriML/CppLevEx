#include <iostream>
using namespace std;
int main()
{
	cout << "enter 2 numbers:" << endl;
	int X,n;
	cin >> X >> n;
	while (n<0)
	{
		cout << "ERROR" << endl;
		cin >> n;
	}
	int o1=(-1) ,m=o1;
	if (n=0)
	X=1;
	if((n-1)!=1)
	{
		for (int i =2; i<=n-1; i++)
	{
		o1 *=m;
	}
	}//o1 = x^(n-1)
	int o2 =X;
	if((2*n-1)!=1)
 	{
 		for (int y=2; y<=(2*n)-1; y++)
	{
		o2 *=X;
 	}
 	}//o2 = x^(2n-1)
	if(n=0)
	{
		o1=1;
		o2=1;
	}
	int g =((o1/(2*n-1)) ;
	cout << (g*o2);
	//for (int i =2; i<=n; i++)
//	{
//		o1 *=m;
//	} m=(-1)^n	
	
	
	return 0;
}
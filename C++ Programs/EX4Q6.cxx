#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int n;
	cout << "enter a number:" << endl;
	cin >> n,m;
	int i;
	while (n < 0)
	{
		cout << "ERROR" << endl;
		cin >> n;
	}
	
	for (i=0 ; i<=n; i++)
	{
		cout << Fn+Sn << " ";
		m=Fn;
		Fn = Sn;
		Sn=m+Sn;
	}

	
	return 0;
}
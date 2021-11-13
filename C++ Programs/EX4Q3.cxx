#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int n;
	cout << "enter a number:" << endl;
	cin >> n;
	int i, Fn=0, Sn=1,m;
	while (n < 0)
	{
		cout << "ERROR" << endl;
		cin >> n;
	}
	cout << Fn << " " << Sn << " ";
	for (i=0 ; i<=n+1; i++)
	{
		cout << Fn+Sn << " ";
		m=Fn;
		Fn = Sn;
		Sn=m+Sn;
	}

	
	return 0;
}
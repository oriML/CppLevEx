#include<iostream>
using namespace std;
#include"Rnum.h"

int main(){
	
	Rnum fn;
	Rnum sn;
	cout << "enter 2 numbers:"<<endl;
	cin >> fn.crdi>>fn.ch>>fn.denom;
	cin >> sn.crdi>>sn.ch>>sn.denom;
	fn.setCardinal(fn.crdi);
	fn.setDenom(fn.denom);
	sn.setCardinal(sn.crdi);
	sn.setDenom(sn.denom);
	
	if(fn.Equal(sn.DN()))
	{cout<< "equal" << endl;}
	else
	{cout<<"diefferent: ";
	fn.print();
	cout<<" ";
	sn.print();
	}
	
	
	return 0;
}
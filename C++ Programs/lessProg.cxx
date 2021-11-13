#include <iostream>
using namespace std; 
class Family {
	public:
	char dad [10]="OM";
	void prM(){cout<<mom;}
	int years;
	int a=5;
	Family& getCode(int a){
		this->a=a; return *this;}
	private:
	char mom[10]={'&','$','-','+','O'};
};
int main()
{
	Family levi;
	Family* home_ptr = &levi;
	//strcpy(home_ptr-> dad, "Ori");
//	strcpy(levi.dad,"oriL");
//	char a[]={'O','d'};
//	home_ptr -> years =8;
//	cout << home_ptr -> years << endl;
//	(*home_ptr).prM();
home_ptr->getCode(8).years=8;
cout<< home_ptr->years;
cout<< home_ptr->a;
	
	return 0;
}
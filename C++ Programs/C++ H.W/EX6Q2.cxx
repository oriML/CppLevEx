#include<iostream>
using namespace std;

class Polygon{
	public:
	Polygon(int);
	int* sides;
	int numSides;
	~Polygon();
	
};

Polygon :: Polygon(int sn){
	cout <<"Poly ctor activated";
	sides=new int[sn];
	*sides=123;
	cout<<*sides;
};
Polygon :: 	~Polygon(){
	cout<<"\ndtor activated";
	delete[] sides;};

int main(){
	cout<<"main activated~~~"<<endl;
	Polygon P(4);
return 0;
}
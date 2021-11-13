#include <iostream>
// ***!!!!!***
// divide to header&cpp + name id and description!!!! 
using namespace std;
static float PI=3.14;
class Circle{
	public:
	class Point{
		private:
		int x;
		int y;
		public:
		Point(){x=1;y=1;};
		void setXofP(){int X;cin >> X;x=X;};
		void setYofP(){int Y;cin>>Y;y=Y;};
		int getXofP(){return x;};
		int getYofP(){return y;};
	};
	Point Cpoint;//the center point
	Circle (){
		Point Cpoint();
		R=0;};
	int R;//Radius
	void setR(){int r;cin >> r;R=r;};
	int getR(){return R;};
	
	float areaOfCircle(){return (PI*R*R);};
	float Scope(){return (2*PI*R);};
			
int checkP(int,int);
void printArea();
void printScope();

};

// functiona of cpp!!!
//# include "Circle.h"
//cpp file***

int Circle :: checkP(int x,int y)
	{
		float A=(Cpoint.getXofP())-x;
		float B=(Cpoint.getYofP())-y;
		if(((A*A)+(B*B))==(R*R))
		return 0;//on
		else if((A*A)+(B*B)<=R*R)
		return -1;//in
		else
		return 1;//out
	}
void Circle :: printArea()
{cout<<areaOfCircle();}
void Circle :: printScope()
{cout<<Scope();};
//main file***
//#include "Circle.h"
int main()
{
	Circle A;
	Circle B;
	Circle C;
	cout << " enter the center point and radius of 3 circles\n";
	A.Cpoint.setXofP();
	A.Cpoint.setYofP();
	A.setR();
	B.Cpoint.setXofP();
	B.Cpoint.setYofP();
	B.setR();
	C.Cpoint.setXofP();
	C.Cpoint.setYofP();
	C.setR();
	cout<<"area: A:";A.printArea();cout<<" ";
	cout<<"B:";B.printArea();cout<<" ";
	cout<<"C:";C.printArea();cout << endl;
	cout<<"scope: A:";A.printScope(); cout<<" ";
	cout<<"B:";B.printScope();cout<<" ";
	cout<<"C:";C.printScope();cout << endl;
	
	int Acounter=0,Bcounter=0,Ccounter=0;
	int x,y;
	cin>>x>>y;
	while((x!=0)||(y!=0))
	{
		if(A.checkP(x,y)!=1)
		Acounter++;
		if(B.checkP(x,y)!=1)
		Bcounter++;
		if(C.checkP(x,y)!=1)
		Ccounter++;
		cin>>x>>y;
	}
	cout<<"num of points in circle A:"<<Acounter<<" B:"<<Bcounter<<" C:"<<Ccounter;
}
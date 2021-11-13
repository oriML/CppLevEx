//Rnum.h:
#pragma once
#include <iostream>
using namespace std;

class Rnum{
private:
int crdi;
int denom;//cardinal & denominator
public:
char ch;
int c,d;
Rnum();
void setDenom(int);
void setCardinal(int);
void setDenom();
void setCardinal();
int getDenom()const;
int getCardinal() const;
void print();
double DN(double c,double d){return (c/d);};
bool Equal(double,double);

Rnum operator/(Rnum);
Rnum operator-(const Rnum&);
Rnum operator++(int);
Rnum& operator--();
Rnum operator--(int);
bool operator>=(Rnum);
bool operator>(Rnum);
bool operator<(Rnum);
bool operator!=(Rnum);
Rnum& operator=(const Rnum&);


};

//Rnum.cpp:
//#include <iostream>
//#include "Rnum.h"
//using namespace std;
Rnum :: Rnum(){crdi=1;denom=1;}
void Rnum :: setDenom(int d){denom=d;
if(denom==0)
{
	cout<<"ERROR"<<endl;
	denom=1;}
}

void Rnum :: setCardinal(){cin>>c;crdi=c;};

void Rnum :: setDenom(){cin>>d;denom=d;
if(denom==0)
{
	cout<<"ERROR"<<endl;
	denom=1;}
}

void Rnum :: setCardinal(int c){crdi=c;};

int Rnum :: getDenom()const{return denom;};

int Rnum :: getCardinal() const{return crdi;}

bool Rnum :: Equal(double n1, double n2){
if(n1==n2)
{return true;}
return false;};
void Rnum :: print(){
	if(crdi!=0)
	{
	if(crdi==denom)
	cout<<"1";
	else
	cout << crdi<<'/'<<denom;
	}
	else
	cout<<"0";}

Rnum Rnum :: operator/(Rnum num)
{
	Rnum tmp;
	tmp.crdi= (this->crdi)*num.getDenom();
	tmp.denom= (this->denom)*num.getCardinal();
	
	return tmp;
}

Rnum Rnum :: operator++(int num)
{
	Rnum tmp(*this);
	this->crdi=crdi+denom;
	return tmp;
}
bool Rnum :: operator>=(Rnum num)
{
	if((this->DN(crdi,denom)>=(num.DN(num.getCardinal(), num.getDenom()))))
	return true;
	return false;
}

bool Rnum :: operator>(Rnum num)
{
	if((this->DN(crdi,denom)>(num.DN(num.getCardinal(), num.getDenom()))))
	return true;
	return false;
}

bool Rnum :: operator<(Rnum num)
{
	if((this->DN(crdi,denom)<(num.DN(num.getCardinal(), num.getDenom()))))
	return true;
	return false;
}

bool Rnum :: operator!=(Rnum num)
{
	if((this->DN(crdi,denom)!=(num.DN(num.getCardinal(), num.getDenom()))))
	return true;
	return false;
}
Rnum Rnum :: operator-(const Rnum& num)
{
	Rnum tmp;
	tmp.setCardinal(crdi*num.getDenom() - denom*num.getCardinal());
	tmp.setDenom(denom*num.getDenom());
	return tmp;
}

Rnum& Rnum :: operator--()
{
	this->crdi=crdi-denom;
	return *this;
}
Rnum Rnum :: operator--(int)
{
	Rnum tmp (*this);
	this->crdi=crdi-denom;
	return tmp;
}

Rnum& Rnum :: operator=(const Rnum& num)
{
	this->crdi=num.getCardinal();
	this->denom=num.getDenom();
	
	return *this;
}
//#include<iostream>

//using namespace std;
//#include"Rnum.h"

int main(){

Rnum fn;
Rnum sn;
char ch;
cout << "enter 2 numbers:"<<endl<<"a:";
fn.setCardinal();
cout<<"whattt\n";
cin>>ch;
fn.setDenom();
cout <<endl<<"b:";
sn.setCardinal();
cin>>ch;
sn.setDenom();

cout<<endl<<"b-a: ";
(sn-fn).print();

cout<<endl<<"a!=b: ";

if(fn!=sn)
{
cout<<"true";
}
else
cout<<"false";


cout<<endl<<"a<b: ";

if(fn<sn)
{
cout<<"true";
}
else
cout<<"false";


cout<<endl<<"a>b: ";

if(fn>sn)
{
cout<<"true";
}
else
cout<<"false";


cout<<endl<<"a>=b: ";
if(fn>=sn)
{
cout<<"true";
}
else
cout<<"false";

cout<<endl<<"a++: ";
(fn++).print();
cout<<endl<<"--a: ";
(--fn).print();
cout<<endl<<"a--: ";
(fn--).print();


sn=fn;

cout<<endl<<"b-a: ";
(sn-fn).print();

cout<<endl<<"b/a: ";
(sn/fn).print();


cout<<endl<<"a!=b: ";

if(fn!=sn)
{
cout<<"true";
}
else
cout<<"false";


cout<<endl<<"a<b: ";

if(fn<sn)
{
cout<<"true";
}
else
cout<<"false";


cout<<endl<<"a>=b: ";

if(fn>=sn)
{
cout<<"true";
}
else
cout<<"false";


return 0;
} 
//Rnum.h:
#pragma once
#include <iostream>
using namespace std;

class Rnum{
public:
int crdi;
int denom;//cardinal & denominator
char ch;
Rnum();
void setDenom(int);
void setCardinal(int);
int getDenom()const;
int getCardinal() const;
void print();
double DN(double c,double d){return (c/d);};
bool Equal(double,double);

Rnum operator/(Rnum);
Rnum operator-(const Rnum&);
void operator++(int);
void operator--();
Rnum operator--(int);
bool operator>=(Rnum);
bool operator>(Rnum);
bool operator<(Rnum);
bool operator!=(Rnum);

};

//Rnum.cpp:
//#include <iostream>
//#include "Rnum.h"
//using namespace std;
Rnum :: Rnum(){crdi=1;denom=1;}
void Rnum :: setDenom(int d){denom=d;
if(denom==0)denom=1;}

void Rnum :: setCardinal(int c){crdi=c;};

int Rnum :: getDenom()const{return denom;};

int Rnum :: getCardinal() const{return crdi;}

bool Rnum :: Equal(double n1, double n2){
if(n1==n2)
{return true;}
return false;};
void Rnum :: print(){cout << crdi<<'/'<<denom;}

Rnum Rnum :: operator/(Rnum num)
{
	Rnum tmp;
	tmp.crdi= (this->crdi)*num.getDenom();
	tmp.denom= (this->denom)*num.getCardinal();
	return tmp;
}

void Rnum :: operator++(int num)
{
	this->crdi=crdi+denom;
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
	return *this;
	
}

//#include<iostream>

//using namespace std;
//#include"Rnum.h"

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

if(fn.Equal(fn.DN(fn.getCardinal(),
fn.getDenom()),sn.DN(sn.getCardinal(),
sn.getDenom())))
{cout<< "equal" << endl;}
else
{cout<<"diefferent\n";
fn.print();
cout<<" ";
sn.print();
}

cout<<"\n";
if(fn>=sn)
(fn/sn).print();
return 0;
} 
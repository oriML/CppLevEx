//Date.h:
#pragma once
#include <iostream>
using namespace std;

class Date{
private:
int day;
int month;
int year;
public:

Date(int d=1,int m=1,int y=1970);
Date (const Date&);
void setDate(int,int,int);
bool checkR(int,int,int);
void print();
Date& operator++();
Date operator++(int);
friend Date operator+=(const Date&, int);
bool operator>=(Date);
bool operator>(Date);
bool operator<(Date);
bool operator==(Date);
int getD()const{return day;};

int getM() const{return month;}

int getY()const{return year;};


};

//Date.cpp:
//#include <iostream>
//#include "Date.h"
//using namespace std;
Date :: Date(int d,int m,int y){
	if(d<1 || d>30)
	{
		cout<<"Error day";
		d=1;
	}
	if(m<1 || m>12)
	{
		cout<<"Error month";
		m=1;
	}
	if(y<1970 || y>2099)
	{
		cout<<"Error year";
		y=1970;
	}
	day=d,month=m,year=y;
}

Date :: Date(const Date& date)
{
	this->day=date.day;
	this->month=date.month;
	this->year=date.year;
}

void Date :: setDate(int d,int m,int y)
{
		if(d<1 || d>30)
	{
		cout<<"Error day\n";
		d=1;
	}
	if(m<1 || m>12)
	{
		cout<<"Error month\n";
		m=1;
	}
	if(y<1970 || y>2099)
	{
		cout<<"Error year\n";
		y=1970;
	}
	if(checkR(d,m,y))
	{
		day=d;
		month=m;
		year=y;
	}
}
bool Date :: checkR(int d,int m,int y)
{
	if((d>0 && d<31) && (m>0 && m<13) && (y>1969 && y<2100))return true;
	return false;
}

Date Date :: operator++(int)
{
	Date tmp(*this);
	++day;
	if(day>30)
	{day%=30;
	++month;}
	if(month>12)
	{month%=12;
	++year;}
	if(year>2099)
	{day=month=1;
	year=1970;}
	
	return tmp;
}
Date& Date :: operator++()
{
	++day;
	if(day>30)
	{day%=30;
	++month;}
	if(month>12)
	{month%=12;
	++year;}
	if(year>2099)
	{day=month=1;
	year=1970;}
	return *this;
}

Date operator+=(const Date& DATE, int d)
{
	Date date(DATE.day,DATE.month,DATE.year);
	date.day+=d;
	if(date.day>30)
	{date.day%=30;
	++date.month;}
	if(date.month>12)
	{date.month%=12;
	++date.year;}
	if(date.year>2099)
	{date.day=date.month=1;
	date.year=1970;}
	
	return date;
}


bool Date :: operator>(Date date)
{
	if(year>date.getY())
	return true;
	else if(year<date.getY())
	return false;
	else if(month>date.getM())
	return true;
	else if(month<date.getM())
	return false;
	else if(day>date.getD())
	return true;
	
	return false;
}

bool Date :: operator<(Date date)
{
	if(year<date.getY())
	return true;
	else if(year>date.getY())
	return false;
	else if(month<date.getM())
	return true;
	else if(month>date.getM())
	return false;
	else if(day<date.getD())
	return true;
	
	return false;
}

bool Date :: operator==(Date date)
{
	if((year!=date.getY())||(month!=date.getM())||(day!=date.getD()))
	return false;
	return true;
}

void Date :: print()
{
	cout<<day<<"/"<<month<<"/"<<year<<endl;
}

//#include<iostream>

//using namespace std;
//#include"Date.h"

enum Choice{ EXIT =-1, UPDATE=1, FRONT=2,END=3,DAYS=4,NEWDATEB=5,NEWDATES=6,EQUALS=7};
int main(){
int choice,d,m,y;
char ch,ch2;
Date Ndate;
Date date;
cout<<"Enter a date"<<endl;
cin>>d>>ch>>m>>ch2>>y;
date.setDate(d,m,y);
date.print();
cout<<"What do you want to do"<<endl;
cin>>choice;
do{
	switch(choice)
	{
	case EXIT:
	break;
	case UPDATE:
	cout<<"Enter a date"<<endl;
	cin>>d>>ch>>m>>ch2>>y;
	date.setDate(d,m,y);
	date.print();
	break;
	case FRONT:
	(++date).print();
	break;
	case END:
	(date++).print();
	break;
	case DAYS:
	cout<<"Enter days"<<endl;
	cin>>d;
	(date+=d).print();
	break;
	case NEWDATEB:
	cout<<"Enter a date"<<endl;
	cin>>d>>ch>>m>>ch2>>y;
	Ndate.setDate(d,m,y);
	if(date>Ndate)cout<<">: true"<<endl;
	else
	cout<<">: false"<<endl;
	break;
	case NEWDATES:
	cout<<"Enter a date"<<endl;
	cin>>d>>ch>>m>>ch2>>y;
	Ndate.setDate(d,m,y);
	if(date<Ndate)cout<<"<: true"<<endl;
	else
	cout<<"<: false"<<endl;
	break;
	case EQUALS:
	cout<<"Enter a date"<<endl;
	cin>>d>>ch>>m>>ch2>>y;
	Ndate.setDate(d,m,y);
	if(date==Ndate)
	cout<<"==: true"<<endl;
	else
	cout<<"==: false"<<endl;
	break;
	
}
cout<<"What do you want to do"<<endl;
	cin>>choice;
}
while(choice!=-1);

return 0;
} 
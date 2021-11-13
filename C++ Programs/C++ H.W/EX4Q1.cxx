#include<iostream>
#include<string.h>
//Account.h
using namespace std;

class Clock{
	private:
	int second;
	int minute;
	int hour;
	public:
	Clock();
	Clock(int,int,int);
	Clock(const Clock&);
	void setSecond(int);
	void setMinute(int);
	void setHour(int);
	int getSecond(){return second;};
	int getMinute(){return minute;};
	int getHour(){return hour;};
	Clock& operator+=(const int);
	friend ostream& operator << (ostream&, Clock&);
	friend istream& operator >> (istream&, Clock&);
	
};

//Account.cpp

Clock :: Clock(){
	second=0;
	minute=0;
	hour=0;
}

Clock :: Clock(const Clock& clock){
	this->second=clock.second;
	this->minute=clock.minute;
	this->hour=clock.hour;
}

Clock :: Clock(int second,int minute,int hour){
	if(second>=0 && second<60)
	this->second=second;
	else
	this->second=0;
	if(minute>=0 && minute<60)
	this->minute=minute;
	else
	this->minute=0;
	if(hour>=0 && hour<24)
	this->hour=hour;
	else
	this->hour=0;
}

void Clock :: setSecond(int second){
	if(second>=0 && second<60)
	this->second=second;
	else
	this->second=0;
	}
	
	void Clock :: setMinute(int minute){
	if(minute>=0 && minute<60)
	this->minute=minute;
	else
	this->minute=0;
	}
	void Clock :: setHour(int hour){	
	if(hour>=0 && hour<24)
	this->hour=hour;
	else
	this->hour=0;
	}
	
	Clock& Clock :: operator+=(const int second){
	if(second>=0 && second<60)
	{this->second=second;}
	else if(second>59)
	{
		minute+=(second/60);
		this->second+=(second%60);
		if(minute>59)
		{hour+=(minute/60);
		minute%=60;}
		if(hour>23)
		hour%=23;
	}
	else
	this->second=0;
	
	return *this;
	}
	
	ostream& operator << (ostream& os, Clock& c){
		if(c.second<10)
		os<<'0'<<c.second<<':';
		else
		os<<c.second<<':';
		if(c.minute<10)
		os<<'0'<<c.minute<<':';
		else
		os<<c.minute<<':';
		if(c.hour<10)
		os<<'0'<<c.hour;
		else
		os<<'0'<<c.hour;
		return os;
	}
	 istream& operator >> (istream& is, Clock& c){
		is>>c.second;
		is>>c.minute;
		is>>c.hour;
	if(c.second>=0 && c.second<60)
	second=c.second;
	else
	c.second=second=0;
	if(c.minute>=0 && c.minute<60)
	minute=c.minute;
	else
	c.minute=minute=0;
	if(c.hour>=0 && c.hour<24)
	hour=c.hour
	else
	c.hour=hour=0;
	return is;
	}
	
//Wrong time format. 

//Invalid time - more than 60 seconds.

//Invalid time - more than 60 minutes.

//Invalid time - more than 24 hours.

//Invalid time - negative number of seconds.

//Invalid time - negative number of minutes.

//Invalid time - negative number of hours.


	class Account{
		private:
		int accountNumber;//מ.ח.
		int code;//קוד
		int balance;//יתרה
		public:
		Account();
		Account(int,int,int);
		void setAccNum(int a){accountNumber=a;};
		int getAccNum(){return accountNumber;};
		void setCode(int c){code=c;};
		int getCode(){return code;};
		void setBalance(int b){balance=b;};
		int getBalance(){return balance;};
		friend istream& operator >> (istream&,Account&);
		void withdraw(int nis);
		void deposit(int C);
		int sumWithdraw=0;
		int sumDeposit=0;
		int getSumWithdraw(){return sumWithdraw;};
		int getSumDeposit(){return sumDeposit;};
	};
	Account :: Account(){
		accountNumber=0;
		code=0;
		balance=0;
	}
Account :: Account(int a,int c,int b){
		accountNumber=a;
		code=c;
		balance=b;
	}
	 istream& operator >> (istream& is,Account& a){
	int c;
	is>>a.accountNumber;
	is>>c;
	if(c/1000==0)
	throw "ERROR: wrong code!";
	else
	a.code=c;
	
}

void Account :: withdraw(int nis){
if(sumWithdraw<6001)
	{if(nis<2501)
	{balance-=nis;
	sumWithdraw+=nis;}
	else
	throw "ERROR: cannot withdraw more than 2500 NIS!";
	}
	else
	throw "ERROR: cannot have less than - 6000 NIS!";
}
void Account :: deposit(int d){
	if(d<10001)
	{
		sumDeposit+=d;
	}
	else
	throw "ERROR: cannot deposit more than 10000 NIS!";
}
//Account main
int main()
{
	
}
//MyString.h
#include <string.h>
#include <iostream>
using namespace std;
class MyString
{
  private:
char *str;
void setString(const char *s);
  public:

MyString(char *s = NULL);
MyString(const MyString &s);
~MyString();
char *getString() const;
MyString &operator=(const MyString &);
bool operator==(const MyString &) const;
bool operator!=(const MyString &) const;
bool operator<(const MyString &) const;
bool operator>(const MyString &) const;
bool operator<=(const MyString &) const;
bool operator>=(const MyString &) const;
MyString operator+(const MyString &);
MyString operator*(int);
MyString insert(int,const char*);
int length() const;
void print() const;
friend void operator=(string a){str=a;};
};

// MyString.cpp
//#include "MyString.h"
//using namespace std;
MyString::MyString(char *s) { setString(s); }
MyString::MyString(const MyString &s) { setString(s.getString()); }
MyString::~MyString()
{
if (str)
delete[] str;
str = NULL;
}
char *MyString::getString() const { return str; }

void MyString::setString(const char *s)
{
if (s)
{
int len = strlen(s) + 1;
str = new char[len];
strcpy(str,s);
}
else
str = NULL;
}
MyString &MyString::operator=(const MyString &s)
{
if (str)
delete[] str;
setString(s.getString());
return *this;
}


bool MyString::operator==(const MyString &s) const {
return !strcmp(str, s.getString());
}

bool MyString::operator!=(const MyString &s) const {
if(strcmp(str, s.getString())!=0)
return true;

return false;
}

bool MyString::operator<=(const MyString &s) const {
if(strcmp(str, s.getString())<=0)
return true;
return false;
}

bool MyString::operator>=(const MyString &s) const {
if(strcmp(str, s.getString())>=0)
return true;
return false;
}

bool MyString::operator>(const MyString &s) const {
if(strcmp(str, s.getString())>0)
return true;
return false;
}

bool MyString::operator<(const MyString &s) const {
if(strcmp(str, s.getString())<0)
return true;
return false;
}

MyString MyString :: insert(int index,const char* str)
{
int len = strlen(str) - index+1;
char* STR = new char[len];
strcpy(STR,this->str);
strcpy(STR+strlen(this->str),str);

return STR;
}

int MyString::length() const { return strlen(str); }

void MyString::print() const
{
if (str)
cout << str << endl;
}


//ORI MENACHEM LEVI 207633462
//EX3Q3
//MADAEY HAMAHSHEV
//the program will operate compare between strings

//#include<string.h>
//#include<iostream>
//#include<istream>
//#include "MyString.h"
//using namespace std;
int main()
{
MyString a;
MyString b;
string A,B;
a=A;
b=B;
cin>>a;
cin >>b;
int n;
cin >>n;
if(n>a.length())
{cout<<"ERROR"<<endl;return 0;}
else{
    if(a>b)
cout<<"a>b"<<endl;

if(a==b)
cout<<"a=b"<<endl;

if(a<b)
cout<<"a<b"<<endl;

b.insert(n,a.getString()).print();
cout << b.getString();
}



return 0;
}
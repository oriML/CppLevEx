//ori menachem levi 206750945
//Exercise 6 question 2
//madmah
//the program will get a file and will sort it again on a new file with encodin
#include <iostream>
#include <fstream>
using namespace std;
char Scode(int c)


	//numbers check
	//int(C) is the DEC value of variable C
	if (c>=48 && c<=53)//c is a int number
	{
		int n1=48;
		for(int i=10;i>=0;i-=2)
		{
			if(n1==c)
			return char(c+(i-1));//the goael is to return the value of the num with +/- action to get the new number from the ascii table
			else
			n1++;
		}
		}
			if (c>=53 && c<=57)
		{
		int n2=57;
		for(int i=10;i>=0;i-=2)
		{
			if(n2==c)
			return char (c-(i-1));
			else
			n2--;
		}
		//Big letters check
		int BL1=65;
		if(c>=65 && c<=77)
		for(int i=26;i>=0;i-=2)
		{
			if(BL1==c)
			return char(c+(i-1));
			else
			BL1++;
		}
		}
		if (c>=78 && c<=90)
	{
		int BL2=90;
		for(int i=26;i>=0;i-=2)
		{
			if(BL2==c)
			return char (c-(i-1));
			else
			BL2--;
		}
		//Small letters check
		int SL1=97;
		if(c>=97 && c<=109)
		for(int i=26;i>=0;i-=2)
		{
			if(SL1==c)
			return char(c+(i-1));
			else
			SL1++;
		}
		}
		if (c>=110 && c<=122)
	{
		int SL2=90;
		for(int i=26;i>=0;i-=2)
		{
			if(SL2==c)
			return char (c-(i-1));
			else
			SL2--;
		}
		
	}
	return char (c);
}
int main()
{

	ifstream dataF("data.txt");
	if(!dataF)
	{ cout<<"error open data file";
	return -1;
	}
	ofstream encode("encoding.txt");
	if(!encode)
	{cout<<"error open encoding file";
	return -1;
	}
	
	int a;
	while(!dataF.eof())
	{
		a= dataF.get();
		encode << Scode(int(a));
	}
	 dataF.close();encode.close();
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
int IfNum(int n)
{
	int AscOfn=int ('n');// ascii val of n
	if (AscOfn>=48 && AscOfn<=57)//AscOfn is a digit
	{
		return (AscOfn - '0');
	}
	return 10;
	
}
int main()
{
//להוסיף תיאור שם וכו' ובדיקות תקינות קלט
	ifstream info("information.txt");
	if(!info)
	{ cout<<"error open information file";
	return -1;
	}
	ofstream freqD("frequencyDigit.txt");
	if(!freqD)
	{cout<<"error open frequencyDigit file";
	return -1;
	}	
	freqD<< "digit: " <<"frequency:" << endl;
	while(!info.eof())
	{
		int counter =0;
		for (int j=0;j<10;j++)
		{
			for (int i=0;i<10;i++)
			{
				if(IfNum(info.get())==j)
		{
			counter++;
		}
		freqD << j << " " << counter << endl;
		counter =0;
			}
		}
	}
	
	return 0;
}

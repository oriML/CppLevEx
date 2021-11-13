//ori menachem levi 207633462
//exercise 6 question 3
// madmah
// the program will print which file contains the biggest avarge of grades
#include <iostream>
#include <fstream>
using namespace std;
int FAvarge(fstream File)
{
	int a,sum=0, counter =0;
	while(!File.eof())
	{
	File >> a;
	sum+=a;
	counter++;
	}
	return (sum/counter);
	
}
int main()
{

	ifstream G1("grade1.txt");
	if(!G1)
	{ cout<<"error open grade1 file";
	return -1;
	}
	ifstream G2("grade2.txt");
	if(!G2)
	{cout<<"error open grade2 file";
	return -1;
	}
	ifstream G3("grade3.txt");
	if(!G3)
	{ cout<<"error open grade3 file";
	return -1;
	}
	ifstream G4("grade4.txt");
	if(!G4)
	{cout<<"error open grade4 file";
	return -1;
	}
	int FuncArr[4];
	int Biggest=0,n=0;
	FuncArr[1]=FAvarge(G1);
	FuncArr[2]=FAvarge(G2);
	FuncArr[3]=FAvarge(G3);
	FuncArr[4]=FAvarge(G4);
	for(int i=1;i<=4;i++)
	{
		if(FuncArr[i]>Biggest)
		{
		Biggest=FuncArr[i];
		n=i;
		}
	}
	cout<<"highest avarge found in file " << n<<endl; 
	 G1.close();
	 G2.close();
	 G3.close();
	 G4.close();
	return 0;
}
}
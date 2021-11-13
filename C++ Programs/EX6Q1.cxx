#include <iostream>
#include <fstream>
using namespace std;

int main()
{

	ifstream id("ID.txt");
	if(!id)
	{ cout<<"error open id file";
	return -1;
	}
	ifstream grades("Grades.txt");
	if(!grades)
	{cout<<"error open grades file";
	return -1;
	}
	
	ofstream newF("roster.txt");
	if(!newF)
	{cout<<"error open new file";
	return -1;
	}
	bool v=false, f = false;
	int a,b;
	while(v== false && f==false)
	{
		if(id.eof()==true)
		v=true;
		if(grades.eof()==true)
		f=true;
		id >> a;
		grades >> b ;
		newF << a << " " << b;
	}
	if(v=false)
{	cout << "finishing reading id before grades" << endl;
	 while(!grades.eof())
	        {
	        	int G;
	        	grades << G <<endl;
	        }
}
else
	        if(f=false)
	cout << "finishing reading grades before id" << endl;
	 while(!id.eof())
	        {
	        	int I ;
	        	id << I;
	        }
	 id.close();grades.close();newF.close();
	return 0;
}
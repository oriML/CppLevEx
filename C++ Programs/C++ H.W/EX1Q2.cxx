//Worker.h****
#include <iostream>
#include <cstring>
using namespace std;
class Worker{
	private:
	char name[20];
	float pph;//payment per hour
	int wh;//work hours
	int ewh;//extra wh
	float sc;//salary count
	public:
	int id;
	Worker ();
	
	void setId(int Id){id=Id;};
	void setName(char[]);
	void setPph(float p){pph=p;};
	void setWh(int w){wh=w;};
	void setEwh(int e){ewh=e;};
	void setSc(float,int,int);
	
	int getId(){return id;};
	void getName(){cout << name;};
	float getPph(){return pph;};
	int getWh(){return wh;};
	int getEwh(){return ewh;};
	float getSc(){return sc;};
};

//Worker.cpp****
//#include <iostream>
//using namespace std;
//#include "Worker.h
	Worker :: Worker()
	{
		id=01;
		strncpy(name,"default",20);
		pph=0.1F;
		wh=01;
		ewh=01;
		sc=(pph*wh)+(ewh*1.5);
	}
	
	void Worker :: setSc(float pph,int wh,int ewh)
	{sc=(float)(pph*wh)+(ewh*1.5);}
		void Worker :: setName(char _name[])
		{strncpy(name,_name,20);}

//Worker.main****
//#include <iostream>
//using namespace std;
//#include "Worker.h"
int main(){
	Worker hh;//highest hours
	Worker hs;//highest salary
	int id=1,wh=1,ewh=1;
	char name[20]="default";
	float pph=1;//payment per hour

	cout<<"enter details, to end enter 0\n";
	cin >> id;
	do{
		cin >> name;//string
		cin >> pph >> wh >> ewh;
		if(pph >=0 && wh>=0 && ewh>=0)
		{
			if(((pph*wh)+(ewh*1.5))>hs.getSc())
		{
			hs.setId(id);
			hs.setName(name);
			hs.setSc(pph,wh,ewh);
		}
		if(wh+ewh>(hh.getWh()+hh.getEwh()))
		{
			hh.setId(id);
			hh.setName(name);
			hh.setWh(wh);
			hh.setEwh(ewh);
		}
		}
		else{cout << "ERROR\n";}
		cin >> id;
	}while(id!=0);

	cout << "highest salary: "<<  hs.getId() << " ";
	hs.getName();
	cout << endl;
	cout << "hardest worker: "<<  hh.getId() << " ";
	hh.getName() ;
	
	
return 0;
}
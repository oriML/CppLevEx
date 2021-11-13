#include <iostream>
using namespace std;

class Animal{
	private:
	char* name;
	protected:
	
	public:
	Animal(){};
	virtual void print()=0;
	
};

class Lion : public Animal{
	public:
	Lion(){};
	~Lion(){cout<<"Lion dtor activated\n";}
	void print(){ cout<<"I am a Lion!\n";}
	
};

class Cow : public Animal{
	public:
	Cow(){};
	~Cow(){cout<<"Cow dtor activated\n";}
	void print(){cout<<"I am a cow!\n";}
	
};

int main(){
	Lion L2;
	Animal* L1=&L2;
	L1->print();
	Cow C1;
	Animal* C2=&C1;
	C2->print();
	
	return 0;
}
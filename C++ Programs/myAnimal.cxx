#include<iostream>
#include<string.h>
using namespace std;

class Animal{
	protected:
	int descendant;
	char* food;
	public:
	int age;
	Animal(int age =0, int desendent =0){};
	void setFood(char*);
};
class Fly : Animal{
	public:
	Fly(char* c,char* st){
		color=c; status=st;
	}
	char* color;
	char* status;
	private:
	string eggsNum;
	protected:
	string land;
};

void Animal :: setFood(char* tmp)
{strcpy(tmp,food);}

int main(){
	char* c1,stat;
	cin>>c1>>stat;
	Fly Kingfisher(c1,stat);
	
}
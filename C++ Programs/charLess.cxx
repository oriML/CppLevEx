#include<iostream>
#include<string.h>
using namespace std;
//void A(char& a){
//	char b[]={'h','o','p'};
//	
//	}
char* myStrcpy( const char* b)
{
	cout<<"c4\n";
	
	cout << "a in the app:"<<b;
	cout<<"\nc5\n";
	return 0;
}
char* myStrcpy(char* destination , const char* source)
{
    char *start = destination;

    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0'; // add '\0' at the end
    return start;
}
int main(){
		
		char *a={"48"},*b={"44"};
		cout<<"c1\n";
		myStrcpy(a,b);
		cout<<"c2\n";
		
		
//cout<<"a before A: ";
//A(a);
		
		cout << endl<<"a after A: "<< a;
		cout<<"\nc3\n";//op: "qwe""p
		return 0;
	}
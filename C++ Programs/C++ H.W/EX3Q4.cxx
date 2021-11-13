#include <iostream>
#include<string>
using namespace std;

void repAst(string& str)//Replace to Asterisk
{
     for(int i=0;i<str.size();i++)
    {
        if(str.at(i)==' ')
        {
            str.replace(i,1,1,'*');
        }
    }
}

void addAtEnd(string& str)
{
    int pos = str.rfind('*');
    str.replace(pos+1,str.size()-pos,"#!!@1234");
}

 void print(string& str)
{
    cout << str << endl;
}
   
int main(){
   
    string str;
    getline(cin, str);
    repAst(str);
    print(str);
    addAtEnd(str);
    print(str);
    while(str.at(0)!='#')
    {
        str.erase(0,4);
       print(str);
    }

return 0;
}
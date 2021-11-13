#include <iostream>
using namespace std;
void checkArr(int buses[][3], int n) {
	
	for (int i = 0; i<5; i++) {
		for (int j = 0; j<3; j++) { 

		buses[i][j]+=n;

		}
}

}

int main()
{
	int num;
	int busses[5][3]=
	{{4,4,4},
	{5,5,5},
	{2,2,2},
	 {3,3,3},
	 {1,1,1}};
	cin >> num;
	checkArr(busses ,num);
	for (int i = 0; i<5; i++) {

		for (int j = 0; j<3; j++) { 

		cout <<*(*(busses+i)+j) << ", ";
		//the variable busses is from the arr family. when we mention it without a specific place, it will send the adress of the begining of the array. for example: (busses + i) equals to the 'i' place/line at the array. and (busses +i)+j, is the 'j' line and the 'j' column of the array.

		}
		cout << endl;

	}
	int a=4;
	int* b=&a;
	int *p1=&num;
	cout << p1<< endl << *b;
//a "pointer variable" with a sign '*' from the top left will print the value of the pointed variable for example: p1 will print the adress of num wich it is it's value. *b will print the value of the pointed variable
}
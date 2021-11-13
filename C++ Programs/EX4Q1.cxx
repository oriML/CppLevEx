#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int i = (rand()%1000);
	if (i>100)
		 i= i%100;
	int y = (rand()%1000);
	 if (y>100)
		 y= y%100;
		 bool v;
		 if (y<i)
		 v = false;
		 cout << i << " " << y << " ";
	for ( int  j= 2 ; j <= 5; j++)
	{
	  i = (rand()%1000);
	if (i>100)
		 i= i%100;
		 if (i<y)
		 v = false;
	 y = (rand()%1000);
	 if (y>100)
		 y= y%100;
		 cout << i << " " << y << " ";
		  if (y<i)
		 v = false;
	}
	if (v)
	cout << endl << "sorted list";
	else
	cout << endl <<  "unsorted list";
	
	return 0;
}
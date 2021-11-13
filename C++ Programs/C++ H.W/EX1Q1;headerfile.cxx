#include <iostream>
using namespace std;

class Rnum{
	public:
	int crdi;
	int denom;//cardinal & denominator
	char ch;
	
	void setDenom(int);
 	void setCardinal(int);
 	int getDenom()const;
 	int getCardinal() const;
 	void print();
	double DN(){return (crdi/denom);};
	bool Equal(double);
	
};

#include <iostream>
#include "Rnum.h"
using namespace std;

{
	
	void Rnum :: setDenom(int d){denom=d;
 	if(denom==0)denom=1;}
 	
 	void Rnum :: setCardinal(int c){crdi=c;};
 	
 	int Rnum :: getDenom()const{return denom;};
 	
 	int Rnum :: getCardinal() const{return crdi;}
 	
	bool Rnum :: Equal(double n2){
		if((DN()==n2) || (((DN())*-1)==n2))
		return true;
		return false;};
		void Rnum :: print(){cout << crdi<<'/'<<denom;}
}
	
#include <iostream>
using namespace std;
int main()
{
	int num;
	cout << "enter a number:" << endl;
	cin >> num;
	enum MONTH {
	JAN = 31,
	 FEB = 29,
	 MARCH = 31,
	 APRIL = 30,
	 MAY = 31,
	 JUNE = 30,
	 JULY = 31,
	 AUG = 31,
	 SEPT = 30,
	 OCT = 31,
	 NOV = 30,
	 DEC = 31
	 };
	 switch (num)
	 {
	 	case 1:
	 	cout << JAN << " days in a month";
	 	break;
	 	
	 	case 2:
	 	cout << FEB << " days in a month";
	 	break;
	 	case 3:
	 	cout << MARCH << " days in a month";
	 	break;
	 	case 4:
	 	cout << APRIL << " days in a month";
	 	break;
	 	case 5:
	 	cout << MAY << " days in a month";
	 	break;
	 	case 6:
	 	cout << JUNE << " days in a month";
	 	break;
	 	case 7:
	 	cout << JULY << " days in a month";
	 	break;
	 	case 8:
	 	cout << AUG << " days in a month";
	 	break;
	 	case 9:
	 	cout << SEPT << " days in a month";
	 	break;
	 	case 10:
	 	cout << OCT << " days in a month";
	 	break;
	 	case 11:
	 	cout << NOV << " days in a month";
	 	break;
	 	case 12:
	 	cout << DEC << " days in a month";
	 	break;
	 	default:
	 	cout << " ERROR";
	 	break;
	 	}
	 	return 0;
}
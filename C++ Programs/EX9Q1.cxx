#include <iostream>
using namespace std;

void addLine(int busses[][3], int& info_Lines, int Line, int stat, int dur);
void deleteLine(int busses[][3], int& info_Lines, int Line);
int search(int busses[][3], int& info_Lines, int Line);
void Sort_Arr(int busses[][3]);
double averageTravel(int busses[][3], int& info_Lines);
int averageStops(int busses[][3], int& info_Lines);
int shortest(int busses[][3], int& info_Lines);
void print(int buses[][3], int numBuses);
int main()
{

const int Lsize = 50, Csize = 3;
int busses[Lsize][Csize] = { {0},{0} };
int Info_size = 0;// the number of with-info lines
int Line, Line_Stat, Line_Dur;

enum choices { EXIT, ADD, DELETE, PRINT, SEARCH, AVG_TRAVEL, AVG_STOPS, SHORTEST_TRAVEL };
int action; cin >> action;
while (action < 0 || action > 7)
{
cout << "ERROR\n" << "enter 0-7.\n";
cin >> action;
}
while (action != 0)
{
switch (action) {

case EXIT:
return 0;
case ADD:
cout << "enter the line to add\n";
cin >> Line;
while (Line <= 0)
{
cout << "ERROR"; cin >> Line;
}
cout << "enter the numbers of stops\n";
cin >> Line_Stat;
while (Line_Stat <= 0)
{
cout << "ERROR"; cin >> Line_Stat;
}
cout << "enter the duration of the ride\n";
cin >> Line_Dur;
while (Line_Dur <= 0)
{
cout << "ERROR"; cin >> Line_Dur;
}
addLine(busses, Info_size, Line, Line_Stat, Line_Dur);
print(busses, Info_size);
break;
case DELETE:
cout << "enter the line to delete\n";
cin >> Line;
deleteLine(busses, Info_size, Line);
print(busses, Info_size);
break;
case PRINT:
print(busses, Info_size);
break;
case SEARCH:
cout << "enter the line to search for\n";
cin >> Line;
cout << search(busses, Info_size, Line);
break;
case AVG_TRAVEL:
cout << averageTravel(busses, Info_size);
break;
case AVG_STOPS:
cout << averageStops(busses, Info_size);
break;
case SHORTEST_TRAVEL:
cout << shortest(busses, Info_size);
break;




}
cin >> action;
}

}
void addLine(int busses[][3], int& info_Lines, int Line, int stat, int dur)
{
int* MLines = &(info_Lines);
int free_Line = search(busses, info_Lines, Line);
bool flag = true;
if (**(busses + *(MLines)) == 0 && (*(MLines) > 0 && *(MLines) < 51))
{
for (int i = 0; i < 50; i++)
{
if (**(busses + i) == Line) { flag = false; }
}
if (free_Line != -1)
{
**(busses + free_Line) = Line;
**(busses + (free_Line)+1) = stat;
**(busses + (free_Line)+2) = dur;
*(MLines)++;
Sort_Arr(busses);
}
}

}
void deleteLine(int busses[][3], int& info_Lines, int Line)
{
//delete + resort the arr
int* MLines = &(info_Lines);
for (int i = 0; i < *(MLines); i++)
{
if (i != *(MLines)-1)
{
if (Line == **(busses + i))
{
for (int j = i; j < *(MLines)-1; j++)
{
**(busses + j) = **(busses + (j + 1));
*(*(busses + j) + 1) = *(*(busses + (j + 1)) + 1);
*(*(busses + j) + 2) = *(*(busses + (j + 1)) + 2);

}
}
}
else
if (Line == **(busses + i))
{
**(busses + i) = 0;
*(*(busses + i) + 1) = 0;
*(*(busses + i) + 2) = 0;
}
}
}
int search(int busses[][3], int& info_Lines, int Line)
{
int* MLines = &(info_Lines);
for (int i = 0; i < *(MLines); i++)
{
if (Line == **(busses + i))
{
return i + 1;
}

}
return -1;
}
void Sort_Arr(int busses[][3])
{
//sort double dim arr
int smallest, Next, item;
for (int i = 0; i < 49; i++)
{
if (**(busses + i) > ** (busses + (i + 1)))
{
item = **(busses + i);
**(busses + i) = **(busses + (i + 1));
**(busses + (i + 1)) = item;
}

}

}
double averageTravel(int busses[][3], int& info_Lines)
{
int sum_Travel = 0;
int* MLines = &(info_Lines);
for (int i = 0; i < *(MLines); i++)
{
sum_Travel += *(*busses + i) + 2;
}
return (sum_Travel) / (*(MLines)-1);
}
int averageStops(int busses[][3], int& info_Lines)
{
int sum_Stations = 0;
int* MLines = &(info_Lines);
for (int i = 0; i < *(MLines); i++)
{
sum_Stations += *(*busses + i) + 1;
}
return (sum_Stations) / (*(MLines)-1);
}

int shortest(int busses[][3], int& info_Lines)
{
int* MLines = &(info_Lines);
if (busses != NULL)

{
int ShortDur = *(*busses) + 2;
int Lnum = *(*busses);
for (int i = 1; i < *(MLines)-1; i++)
{
if (ShortDur > * (*busses + i) + 2)
{
ShortDur = *(*busses + i) + 2;
Lnum = *(*busses + i);
}
} return Lnum;
}
else
return -1;


}


// prints out the buses that are saved in the database

void print(int buses[][3], int numBuses) {



for (int i = 0; i < numBuses; i++) { // for each bus that is present in the database

for (int j = 0; j < 3; j++) { // prints the 3 pieces of data of the bus

cout << *(*(buses + i) + j) << " ";

}

cout << endl;

}

}
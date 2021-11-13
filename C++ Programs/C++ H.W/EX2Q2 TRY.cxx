	#ifndef VECTOR
#define VECTOR

#pragma once

#include <iostream>
#include <cmath>
using namespace std;
//header
class Vector
{
	int *data;	//pointer to arr of integers
	int capacity; //max possible
	int size;	 //has now

  public:
	Vector(int S=10); //ctor
	Vector(Vector const &vec);
	~Vector();
	void getCapacity(int);
	void setSize(int);

	int getCapacity();
	int getSize();

	void print();

	Vector& assign(Vector const &v);

	bool isEqual(Vector &v);

	int &at(int);

	int strcatcat(Vector &v);

	Vector strnewcat(Vector &v);

	void clear();

	void delLast();

	void insert(int);
};
//#endif
//	//cpp file-----------------------
//	#include "Vector.h"
Vector ::Vector(int S): capacity(S),size(0), data(new int[S])
{
	
}; //ctor

Vector ::Vector(Vector const &vec)
{
	this->capacity = vec.capacity;
	this->size = vec.size;
	this->data = new int[capacity];
	for(int i =0;i<size;i++)
	data[i]=vec.data[i];
}
Vector ::~Vector()
{
	if (size)
		delete[] data;
}
void Vector ::getCapacity(int c)
{
	capacity = c;
}
void Vector ::setSize(int s)
{
	size = s;
}

int Vector ::getCapacity()
{
	return capacity;
}
int Vector ::getSize()
{
	return size;
}

void Vector :: print()
{
	cout << "capacity: " << capacity << " size: " << size << " val: ";
	for (int i = 0; i < size; i++)
	{
		cout <<this->data[i]<< " ";
	}
	cout << endl;
}

Vector& Vector ::assign(Vector const &v)
{
	capacity = v.capacity;
	size = v.size;
	data = new int[capacity];
	for (int i = 0; i < size; i++)
	data[i]= v.data[i];
	return *this;
}

bool Vector ::isEqual(Vector &v)
{
	if (v.size)
{
	int i;
	for (i =0; i < size; i++)
	{
		if (data[i] != v.data[i])
			return false;
	}

	return true;
}
return false;
}

int &Vector ::at(int index)
{
	if (index >= size)
		cout << "ERROR\n";

	else
	{
		int val;
		cin >> val;
		data[index - 1] = val;
	}
	return data[index - 1];
}

int Vector ::strcatcat(Vector &v)
{
	if ((this->size) == v.size)
	{
		int sum = 0;
		for (int i = 0; i < size; i++)
			sum += v.data[i] * data[i];
		return sum;
	}
	else
	{
		cout << "ERROR\n";
	}
}

Vector Vector ::strnewcat(Vector &v)
{
	
	Vector tmp(capacity + v.capacity);
	for (int i = 0; i < size; i++)
		tmp.data[i]=this->data[i];
	for (int i = 0; i < size + v.size; i++)
		tmp.data[i+size]= v.data[i];
		tmp.size=size + v.size;
	return tmp;
}

void Vector ::clear()
{
for (int i = 0; i < capacity; i++)
	{
		data[i] = 0;
	}
	size = 0;
}
void Vector ::delLast()
{
	if (size>0)
	{
			data[size-1]=0;
			size--;
	}
	else
		cout << "ERROR\n";
}

void Vector ::insert(int val)
{
	if (size<capacity)
		{data[size] = val;
		size++;}
	else
		cout << "ERROR\n";
}

//main
//this program manage presentasion of vectors by will of the user.

//the program will print data of the vectors.

//#include "Vector.h"
//#include <iostream>
//using namespace std;

enum options

{

	stop,
	assignment,
	isEqual,
	mult,
	add,
	clear,
	delLast

};

int main()

{
	Vector v1(10), v2(10), v3;

	for (int i = 1; i <= 4; i++)

	{
		v1.insert(i);

		v2.insert(i + 4);
	}

	int choice, val;

	cout << "enter your choice 0-6\n";

	cin >> choice;

	while (choice)

	{
		switch (choice)

		{
		case assignment:
			v3.assign(v1);

			break;

		case isEqual:
			if (v1.isEqual(v2))
				cout << "v1==v2\n";
			else
				cout << "v1!=v2\n";

			break;

		case mult:
			cout << "v1*v2=" << v1.strcatcat(v2) << endl;

			break;

		case add:
			v3.assign(v1.strnewcat(v2));

			break;

		case clear:
			v1.clear();

			break;

		case delLast:
			v2.delLast();

			break;

		default:
			cout << "ERROR";
		}

		v1.print();
		v2.print();
		v3.print();

		cout << "enter your choice 0-6\n";

		cin >> choice;
	}

	return 0;
}

#endif
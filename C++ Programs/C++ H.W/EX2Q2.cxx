#include <iostream>
#include <cmath>
using namespace std;
//header
class Vector{
	
	private:
	int* data;//array of integers
	int capacity;
	int size;
	
	public:
	Vector();
	Vector(const Vector &);
	Vector(int);
	~Vector();

void setVector();
int* getVector();

void setCapacity(int);
int getCapacity();

void setSize(int);
int getSize();

void print();

};

//cpp
Vector :: Vector ()
{
	capacity =10;
	size=1;
	int vector[getCapacity()];
	data = vector;
}//ctor

Vector :: Vector(int s)
{
	capacity=s;
	size=1;
	int vector[capacity];
	data = vector;
}

Vector :: Vector(const Vector &v)
{
	capacity = v.capacity;
	size = v.size;
	int vector[capacity];
	data = vector;
	for(int i=0;i<capacity;i++)
	*(data + i)=*(v.data+i);
}//cpy ctor

Vector :: ~Vector(){
	if(data)
	delete &data;
	data = NULL;
}//destructor

void Vector :: setVector()
{
	int* p;
	for(int i=0;i<capacity;i++)
	{	int a;
	cin >> a;
	*(p + i)=a;
	}
	data = p;
}

int* Vector :: getVector(){
	return data;
}

void Vector :: setCapacity(int c)
{cin>>c;
capacity = c;}

int Vector :: getCapacity()
{return capacity;}

void Vector :: setSize(int s){size=s;}

int Vector :: getSize(){return size;}

void Vector :: print()
{
	cout << "capacity: "<< capacity << " size: " << size<< " val: ";
	for(int i=0;i<size;i++)
	{
		cout<< *(data+i)<< " ";
	}
}
//main
int main()
{
	Vector a;
	
	
}
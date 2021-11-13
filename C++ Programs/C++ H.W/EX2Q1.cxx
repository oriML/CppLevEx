#include <iostream>
#include <cmath>
using namespace std;
//polygon.h
class Point{
		private:
		int x;
		int y;
			
		public:
		Point();
	
		void setXofP();
		void setYofP();
		int getXofP(){return x;};
		int getYofP(){return y;};
		
		float pDistance(int,int,int,int);
			
	};//Point
class Polygon{
	private:
	int sizeOfV=0;
	
	public:
	void setVertices(int V){sizeOfV=V;};
	
	int getVertices(){return sizeOfV;};
	
	Point *Poly = new Point[sizeOfV];//delete[] Poly!
	Polygon();
	
	~Polygon();
	
	Polygon(const Polygon&);
	
	float polyScope(Point[],int);
	
	int getScope(float);
};

//cpp files

	Point :: Point()
	{
	x=1;
	y=1;
	}
	
	void Point :: setXofP()
	{
		int X;
		cin >> X;
		while(X<0)
		{
			cout<<"ERROR\n";
			cin>>X;
		}
		x=X;
	}
		void Point :: setYofP()
		{
			int Y;
			cin>>Y;
		while(Y<0)
		{
			cout<<"ERROR\n";
			cin>>Y;
		}
		y=Y;
	}
		
		
	Polygon :: Polygon ()
	{
		sizeOfV=1;
		Poly[1];
	}
	
	Polygon :: ~Polygon()
	{
		if(Poly)
		delete [] Poly;
		}
		
	float Point :: pDistance(int x1, int y1,int x2,int y2)
	{
		float distance=pow(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)), 0.5);
	 return distance;
	}
	
	float Polygon :: polyScope(Point arr[],int size)
	{
		float Scope=0;
		for(int i=1;i<size;i++)
		{
			Scope+=arr[i].pDistance(arr[i].getXofP(),arr[i].getYofP(),arr[i-1].getXofP(),arr[i-1].getYofP()); 
			//check only!
			//cout << "distance pf x and y of arr["<<i<<"] and arr["<<i-1<<"]: \n"<<arr[i].pDistance(arr[i].getXofP(),arr[i].getYofP(),arr[i-1].getXofP(),arr[i-1].getYofP())<<endl;
			//check only!
			}
			Scope+=arr[size-1].pDistance(arr[size-1].getXofP(),arr[size-1].getYofP(),arr[0].getXofP(),arr[0].getYofP()); 
			//check only!
		//	cout << "distance of x and y of arr["<<size-1<<"] and arr["<<0<<"]: \n"<<
//			arr[size-1].pDistance(arr[size-1].getXofP(),arr[size-1].getYofP(),arr[0].getXofP(),arr[0].getYofP())<<endl;
			//check only!
	return Scope;
	}
		
		
	int Polygon :: getScope(float S)
	{
		if(S-((int)S)>=0.5)
		return (int)S+1;
		return (int)S;
	}
		
	Polygon :: Polygon(const Polygon& Poly)
	{
		sizeOfV=Poly.sizeOfV;
		Point *P=new Point [sizeOfV];
		for(int i=0;i<sizeOfV;i++)
		{P[i]=Poly.Poly[i];}
	}
	

int main()
{
	
	Polygon Pol;
	int v;
		cout<<"enter numbers of sides:"<<endl;
	cin >> v;
	while(v<=0)
		{cout<<"ERROR\n";
		cin>>v;}
	Pol.setVertices(v);
	cout<<"enter points:"<<endl;
	for(int i=0;i<Pol.getVertices();i++)
	{
		Pol.Poly[i].setXofP();
		Pol.Poly[i].setYofP();
	}
	
	cout << Pol.getScope(Pol.polyScope(Pol.Poly,Pol.getVertices()));
	
}
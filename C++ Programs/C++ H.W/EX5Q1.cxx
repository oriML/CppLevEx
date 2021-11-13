//------------------------------------------------
// class List
// arbitrary size Lists
// permits insertion and removal
// only from the front of the List
//------------------------------------------------
#include<iostream>
using namespace std;
class List
{
	protected ://--------------------------------------------
		// inner class link
		// a single element for the linked List
		//--------------------------------------------
	class Link
	{
	public : 
	// data areas
	int value;
	Link *next;
	// constructor
	Link(int linkValue, Link *nextPtr);
	Link(const Link &);
		
	};
	 //end of class Link
	public:
	// constructors
	List();
	List(const List &);
	~List();
	// operations
	void add(int value);
	int firstElement() const;
	bool search(const int &value) const;
	bool isEmpty() const;
	void removeFirst();
	void clear();
	List& operator=(const List l){
		Link p1,p2;;
	while
	(p1=this>next!=isEnpty()||p2=lnext!=isEmpty())
	{p1.value=p2.value;
	p1++;p2++;
	}
		
	protected:
// data field
Link* head;
};
//------------------------------------------------
// class Link implementation
//------------------------------------------------
List::Link::Link( int val, Link* nxt) : 
value(val), next(nxt) {}
List::Link::Link(const Link& source) : 
value(source.value),next(source.next) {}
//--------------------------------------------
// class List implementation
//--------------------------------------------
List::List(): head(nullptr)
{
// no further initialization
}
List::List(const List &l) 
{
Link *src, *trg;
if(l.head== nullptr)
head= nullptr;
else
{
head= new Link((l.head)->value, nullptr);
src=l.head;
trg=head;
while(src->next!= nullptr)
{
trg->next= new Link
((src->next)->value, nullptr);
src=src->next;
trg=trg->next;
}
}
}
List::~List()
{
clear();
}
void List::clear()
{
// empty all elements from the List
Link* next;
for (Link * p=head; p != nullptr; p=next)
{
// delete the element pointed to by p
next=p->next;
p->next= nullptr;
delete p;
 }
// mark that the List contains no elements
head= nullptr;
}
bool List::isEmpty() const
{
// test to see if the List is empty
// List is empty if the pointer to the head
// Link is null
return head == nullptr;
}
void List::add( int val)
{
//Add a new value to the front of a Linked List
 head=new Link(val, head);
 if(head== nullptr) 
 throw "failed in memory allocation";
}
int List::firstElement() const
{
// return first value in List
if (isEmpty())
throw "the List is empty, no first Element";
return head->value;
}
bool List::search(const int &val) const
{
// loop to test each element
for (Link* p=head; p!= nullptr; p=p->next)
if (val == p->value)
return true;
// not found
return false;
}
void List::removeFirst()
{
// make sure there is a first element
if(isEmpty())
throw "the List is empty, no Elements to remove";
// save pointer to the removed node
Link* p=head;
// reassign the first node
head= p->next;
p->next = nullptr;
// recover memory used by the first element
delete p;
}
//#include <iostream>
//#include "List.h"
//using namespace std;
int main()
{
	List lst;
	int choice,val;
	cout<<"enter the list values\n";
	cin>>lst;
	cout<<"choose 0-2\n";
	cin>>choice;
	while (choice)
	{
		switch (choice)
		{
		case 1:cout<<"enter a value to insert\n";
			cin>>val;
			lst.insert(val);
			break;
		case 2:cout<<"enter a value to remove\n";
			cin>>val;
			try{
				lst.remove(val);
			}
			catch(char * msg)
			{
				cout<<msg<<endl;
			}
			break;
		default:cout<<"ERROR\n";
		}
		cout<<lst<<endl;
		cout<<"choose 0-2\n";
		cin>>choice;
	}
	return 0;
}


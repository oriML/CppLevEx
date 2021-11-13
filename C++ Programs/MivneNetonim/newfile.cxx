#include <iostream>
using namespace std;

class Node
{
	int key;
	Node* next;

Node* create_list()
{
	Node* head = new Node;
	head = NULL;
	return head;
}

bool is_empty(Node* head)
{
	if(head==NULL)return true;
	return false;
}

Node* find(Node* head, int k)
{
	Node* x=head;
	{
	while(x!=NULL || x->key!=k)
		x=x->next;
	}
	return x;
}

void insert_first(Node* head,Node* x)
{
	x->next=head;
	head=x;
}

void insert(Node* x,Node* y)
{
	y->next=x->next;
	x->next=y;
}

void delete_first(Node* head)
{
	if(head==NULL)cout<<"ERROR\n";
	else
	head=head->next;
}

void delete(Node* head, Node* x)
{
	if(head->next==x)
	head=x->next;
	else
	{	
	Node* w= head->next;
	while(w->next!=x)
	w=w->next;
	
}
};

int main()
{
	
}
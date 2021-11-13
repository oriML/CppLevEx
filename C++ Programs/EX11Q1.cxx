#include <iostream>
#include<cstring>
#include<string>
#pragma warning (disable:4996)

using namespace std;

struct Item {
int code;
char name[21];
int storage;
int minItem;
float price;
};

void addItem(Item* store, int maxItems, int numItems);
void findPrice(Item* store, int numItems);
void sold(Item* store, int numItems);
void order(Item* store,int numItems);
void print(Item* store, int numItems);
enum cases { EXIT, ADD, FIND, SOLD, ORDER, PRINT };
int main()
{

int maxItems;
int numItems = 0;
int choice;
cout << "enter max number of items: " << endl;
cin >> maxItems;
Item* store = new Item[maxItems];
do {
cout << "enter 0-5:\n";

cin >> choice;

switch (choice) {
case EXIT: break;

case ADD: addItem(store, maxItems, numItems);
break;

case FIND: findPrice(store, numItems);
break;

case SOLD: sold(store, numItems);
break;

case ORDER: order(store, numItems);
break;

case PRINT: print(store, numItems);
break;

default: cout << "ERROR" << endl;

}
} while (choice != 0);
}
void addItem(Item store[], int maxItems, int numItems)
{
Item NewItem;
if (numItems < maxItems)
{
cout << "enter code:\n";
cin >> NewItem.code; store[numItems + 1].code = NewItem.code;
cout << "enter name:\n";
cin >> NewItem.name; store[numItems + 1].name == NewItem.name;
cout << "enter amount:\n";
cin >> NewItem.storage; store[numItems + 1].storage = NewItem.storage;
cout << "enter minimum amount:\n";
cin >> NewItem.minItem; store[numItems + 1].minItem = NewItem.minItem;
cout << "enter price:\n";
cin >> NewItem.price; store[numItems + 1].price = NewItem.price;

bool f = true;
for (int i = 0; i <= numItems; i++)
{
if (NewItem.code == store[i].code)
{
f = false;
if (NewItem.name == store[i].name)
{
store[i].storage += NewItem.storage;
store[i].price = NewItem.price;
}
else {
cout << "ERROR\n"; break;
}
}

}
if (f=true)
{
store[numItems + 1] = NewItem;
numItems++;
}
}
}

void findPrice(Item* store, int numItems)
{
int code;
cout << "enter code:\n";
cin >> code;
bool f = false;
for (int i = 0; i <= numItems; i++)
{
if (store[i].code == code)
{
cout << "price: " << store[i].price; f=true;
}
}
if(f=false)
cout << "ERROR\n";
}
void sold(Item* store, int numItems) {

int code, amount;
cout << "enter code:\n";
cin >> code;
cout << "enter code:\n";
cin >> amount;
bool f = false;
for (int i = 0; i <= numItems; i++)
{
if (store[i].code == code)
{
store[i].storage -= amount;
f = true;
}
}
if (f=false)
cout << "ERROR\n";

}
void order(Item* store, int numItems)
{
for (int i = 0; i <= numItems; i++)
{
if (store[i].storage < store[i].minItem)
{
cout << "item name:\n" << store[i].name << "code:\n" << store[i].code << "amount to order:\n" << store[i].minItem + 5;
store[i].storage = store[i].minItem + 5;
}
}
}


void print(Item* store,int numItems) {

for (int i = 0; i <= numItems; i++)
{
cout << "name:" << store[i].code << endl;
cout << "code:" << store[i].name << endl;
cout << "amount:" << store[i].storage << endl;
cout << "minimum amount:" << store[i].minItem<< endl;
cout << "price:" << store[i].price << endl;
}

}
#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	myFront = myBack = counter = 0;
	myArray[MAX_CAPACITY] = { 0 };
}

inline bool Queue::empty() const 
{ return counter == 0; }

inline bool Queue::full()const
{return counter == MAX_CAPACITY;}

void Queue::addQ(const QElement &value) 
{
	if (!full())
	{
		counter++;
		myArray[myBack] = value;
		myBack = (myBack + 1) % MAX_CAPACITY;
	}
	else
		cout << "Queue is full!, could not add " << value << " to queue!" << endl;
}

void Queue::removeQ()
{
	if (!empty())
	{
		counter--;
		myFront = (myFront + 1) % MAX_CAPACITY;
	}
	else
		cout << "Queue is empty!" << endl;
}

QElement Queue::front() const
{
	if (!empty())
		return myArray[myFront];
	else
		cout << "No items in queue to display!" << endl;
}

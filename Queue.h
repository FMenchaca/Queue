#ifndef QUEUE_H
#define QUEUE_H

const unsigned int MAX_CAPACITY = 8;
typedef int QElement;

class Queue
{
private:

	QElement myArray[MAX_CAPACITY];
	unsigned int myFront,
		myBack,
		counter;
public:

	Queue();
	bool empty() const;
	bool full() const;
	void addQ(const QElement &value);
	void removeQ();
	QElement front() const;

};

#endif 

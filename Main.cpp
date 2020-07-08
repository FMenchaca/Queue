#include "Queue.h"
#include <iostream>
using namespace std;

int main()
{
	Queue Q;

	Q.addQ(10);
	Q.addQ(20);
	Q.addQ(30);
	Q.addQ(40);

	cout << Q.front() << endl;
	Q.removeQ();

	Q.addQ(50);
	Q.addQ(60);
	Q.addQ(70);
	Q.addQ(80);
	Q.addQ(90);
	Q.addQ(100);

	cout << Q.front() << endl;
	Q.removeQ();
	cout << Q.front() << endl;
	Q.removeQ();
	cout << Q.front() << endl;
	Q.removeQ();

	Q.addQ(110);
	cout << Q.front() << endl;
	Q.removeQ();
	cout << Q.front() << endl;
	Q.removeQ();
	cout << Q.front() << endl;

	system("pause");
	return (0);
}
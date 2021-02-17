#include <iostream>
#include "queue.h"

using namespace std;

int main(void)
{
	Queue q1(100), q2(10);
	//q1.initQueue(100);
	//q2.initQueue(10);
	
	q1.push(100);
	q1.push(200);
	cout << "q1 1st pop() : ";
	cout << q1.pop() << endl;
	q1.push(300);
	
	q2.push(900);
	q2.push(800);
	cout <<"q2 1st pop() : " << q2.pop() << endl;
	q2.push(700);
	
	
	cout <<"q1 2nd pop() : "<< q1.pop() << endl;
	cout <<"q1 3rd pop() : "<< q1.pop() << endl;
	
	
	cout <<"q2 2nd pop() : "<< q2.pop() << endl;
	cout <<"q2 3rd pop() : "<< q2.pop() << endl;	
	

	//q1.cleanupQueue();
	//q2.cleanupQueue();	
	return 0;
}

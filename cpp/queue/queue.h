#ifndef QUEUE_H
#define QUEUE_H

class Queue {
private:
	int *pArr;
	int size;
	int front;
	int rear;
	
public:
	Queue(int size);	//생성자 constructor
	~Queue();			//소멸자 destructor

	void push(int data);
	int pop();
	
};

#endif

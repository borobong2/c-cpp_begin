#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE = 100;

Queue::Queue(int size)
:arr_(size), front_(0), rear_(0)
{
	
}
/*
Queue::~Queue()
{
	delete [] pArr_;
}
*/
void Queue::push(int data)
{
	assert( !isFull());
	
	//this->pArr[this->tos] = data;
	arr_[rear_] = data;
	++rear_;
}

int Queue::pop()
{
	assert( !isEmpty());
	
	int temp =front_;
	++front_;
	
	return arr_[temp];
}

bool Queue::isFull() const
{
	return (rear_ == arr_.size());
}

bool Queue::isEmpty() const
{
	return (front_ == rear_);
}

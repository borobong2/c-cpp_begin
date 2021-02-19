#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE = 100;

Queue::Queue(int size)
:pArr_(new int[size]), size_(size), front_(0), rear_(0)
{
	assert(pArr_ );
}

Queue::~Queue()
{
	delete [] pArr_;
}

void Queue::push(int data)
{
	assert( !isFull());
	
	//this->pArr[this->tos] = data;
	pArr_[rear_] = data;
	++rear_;
}

int Queue::pop()
{
	assert( !isEmpty());
	
	int temp =front_;
	++front_;
	
	return pArr_[temp];
}

bool Queue::isFull() const
{
	return (rear_ == size_);
}

bool Queue::isEmpty() const
{
	return (front_ == rear_);
}

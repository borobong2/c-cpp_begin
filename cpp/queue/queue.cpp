//#include <cstdlib>
#include <assert.h>
#include "queue.h"

Queue::Queue(int size)
{
	//this -> pArr = (int *)malloc(sizeof(int) * size);
	this->pArr = new int[size];
	assert(this ->pArr /* != NULL */);
	this -> size = size;
	this -> rear = 0;
	this -> front = 0;
}

Queue::~Queue()
{
	//free(this->pArr);
	delete [] this->pArr;
}

void Queue::push(int data)
{
	//full?
//	if (pq->tos == pq->size)
//	{
//		fprintf(stderr, "stack is full\n");
//		exit(1);
//	}
	assert(this->rear != this->size);
	
	this->pArr[this->rear] = data;
	++this->rear;
}

int Queue::pop()
{
	//empty?
//	if (ps -> tos == 0)
//	{
//		fprintf(stderr, "stack is empty\n");
//		exit(2);
//	}
	assert(this->rear != this->front);
	
	int temp = this->front;
	++this->front;
	return this->pArr[temp];
}



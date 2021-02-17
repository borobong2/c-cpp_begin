#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

void initQueue(Queue *pq)
{
	pq -> front = 0;
	pq -> rear = 0;
}

void push(Queue *pq, int data)
{
	//full?
	if (pq->rear == ARRAYSIZE)
	{
		fprintf(stderr, "queue is full\n");
		exit(1);
	}
	
	pq->array[pq->rear] = data;
	++pq->rear;
}

int pop(Queue *pq)
{
	//empty?
	if (pq -> rear == pq -> front)
	{
		fprintf(stderr, "queue is empty\n");
		exit(2);
	}
	int temp = pq->front;
	++pq->front;
	

	return pq->array[temp];
}



#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue *pq, int size)
{
	pq -> pArr = malloc(sizeof(int) * size);
	assert(pq ->pArr /* != NULL */);
	pq -> size = size;
	pq -> rear = 0;
	pq -> front = 0;
}

void cleanupQueue(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, int data)
{
	//full?
//	if (pq->tos == pq->size)
//	{
//		fprintf(stderr, "stack is full\n");
//		exit(1);
//	}
	assert(pq->rear != pq->size);
	
	pq->pArr[pq->rear] = data;
	++pq->rear;
}

int pop(Queue *pq)
{
	//empty?
//	if (ps -> tos == 0)
//	{
//		fprintf(stderr, "stack is empty\n");
//		exit(2);
//	}
	assert(pq->rear != pq->front);
	
	int temp = pq->front;
	++pq->front;
	return pq->pArr[temp];
}



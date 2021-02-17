#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "queue.h"

void initQueue(Queue *pq, int size, int eleSize)
{
	//ps -> pArr = malloc(sizeof(int) * size);
	pq->pArr = malloc(eleSize * size);
	assert(pq ->pArr /* != NULL */);
	
	pq -> eleSize = eleSize;
	pq -> size = size;
	pq -> front = 0;
	pq -> rear = 0;
}

void cleanupQueue(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, const void *pData)
{
	//full?
//	if (ps->tos == ps->size)
//	{
//		fprintf(stderr, "stack is full\n");
//		exit(1);
//	}
	assert(pq->rear != pq->size);
	
	//ps->pArr[ps->tos] = data;
	//memcpy(&ps->pArr[ps->tos] ,pData , ps->eleSize);
	memcpy( (unsigned char *)pq->pArr + pq->eleSize * pq ->rear, pData, pq->eleSize);
	++pq->rear;
}
/*
int pop(Stack *ps)
{
	//empty?
//	if (ps -> tos == 0)
//	{
//		fprintf(stderr, "stack is empty\n");
//		exit(2);
//	}
	assert(ps->tos != 0);
	
	--ps->tos;
	return ps->pArr[ps->tos];
}
*/

void pop(Queue *pq, void *pData)
{
	assert(pq->front != pq->rear);
	int temp = pq->front;
	++pq->front;
	//*pData = ps->pArr[ps->tos];
	//memcpy(pData, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pData, (unsigned char *)pq->pArr + pq->eleSize * temp, pq->eleSize);
}


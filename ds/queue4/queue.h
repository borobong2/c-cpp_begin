#ifndef QUEUE_H
#define QUEUE_H
//#define ARRAYSIZE 100

typedef struct {
//	int array[ARRAYSIZE];
	int *pArr;
	int size;
	int front;
	int rear;

} Queue;

void initQueue(Queue *pq, int size);
void cleanupQueue(Queue *pq);

void push(Queue *pq, int data);
int pop(Queue *pq);

#endif

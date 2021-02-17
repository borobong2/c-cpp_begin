#ifndef STACK_H
#define STACK_H
//#define ARRAYSIZE 100

typedef struct {
//	int array[ARRAYSIZE];
//	int *pArr;
	void *pArr;
	int eleSize;
	int size;
	int tos;

} Stack;

void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);

void push(Stack *ps, const void *pData);
//int pop(Stack *ps);
void pop(Stack *ps, void *pData);

#endif

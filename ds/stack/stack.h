#ifndef STACK_H
#define STACK_H

typedef struct {

	int array[100];
	int tos;
	

} Stack;

void push(Stack s, int data);
int pop(Stack s);

#endif

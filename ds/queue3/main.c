#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue q1, q2;
	//Stack stacks[10];
	//s1.tos = 0;
	//s2.tos = 0;
	initQueue(&q1);
	initQueue(&q2);
	
	push(&q1, 100);
	push(&q1, 200);
	printf("q1 1st pop() : %d\n", pop(&q1));
	push(&q1, 300);
	
	push(&q2, 900);
	push(&q2, 800);
	printf("q2 1st pop() : %d\n", pop(&q2));
	push(&q2, 700);
	
	printf("q1 2nd pop() : %d\n", pop(&q1));
	printf("q1 3rd pop() : %d\n", pop(&q1));	
	
	printf("q2 2nd pop() : %d\n", pop(&q2));
	printf("q2 3rd pop() : %d\n", pop(&q2));	
	
	pop(&q1);
	
	return 0;
}

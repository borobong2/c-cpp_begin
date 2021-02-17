#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "stack.h"

void initStack(Stack *ps, int size, int eleSize)
{
	//ps -> pArr = malloc(sizeof(int) * size);
	ps->pArr = malloc(eleSize * size);
	assert(ps ->pArr /* != NULL */);
	
	ps->eleSize = eleSize;
	ps -> size = size;
	ps -> tos = 0;
}

void cleanupStack(Stack *ps)
{
	free(ps->pArr);
}

void push(Stack *ps, const void *pData)
{
	//full?
//	if (ps->tos == ps->size)
//	{
//		fprintf(stderr, "stack is full\n");
//		exit(1);
//	}
	assert(ps->tos != ps->size);
	
	//ps->pArr[ps->tos] = data;
	//memcpy(&ps->pArr[ps->tos] ,pData , ps->eleSize);
	memcpy( (unsigned char *)ps->pArr + ps->eleSize * ps ->tos, pData, ps->eleSize);
	++ps->tos;
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

void pop(Stack *ps, void *pData)
{
	assert(ps->tos != 0);
	--ps->tos;
	//*pData = ps->pArr[ps->tos];
	//memcpy(pData, &ps->pArr[ps->tos], ps->eleSize);
	memcpy(pData, (unsigned char *)ps->pArr + ps->eleSize * ps ->tos, ps->eleSize);
}


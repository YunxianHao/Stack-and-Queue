#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>


typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
//Init
void StackInit(ST* ps);
//destroy
void StackDestroy(ST* ps);
//enter the stack
void StackPush(ST* ps, STDataType x);
//out of stack
void StackPop(ST* ps);
//return stack top element
STDataType StackTop(ST* ps);
//Judge empty
bool StackEmpty(ST* ps);
//the counts
int StackSize(ST* ps);


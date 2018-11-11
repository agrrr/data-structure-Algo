/******************************************

* Ex 3
******************************************/
#include "ex3.h"
#include<stdlib.h>
#include<string.h>
/*
struct stack
{
	char x;
	struct stack* prev;
};
typedef struct stack stack;
stack* insert(stack* s, char x)
{
	stack* temp = (stack*) malloc(sizeof(stack));
	temp->prev = s;
	return temp;
}
stack* pop(stack* s)
{
	stack* temp;
	temp = s->prev;
	free(s);
	if (temp == NULL)
		return NULL;
	else
		return temp;
}
char top(stack*s)
{
	return s->x;
}
stack* decleration(char firstElement)
{
	stack*temp = (stack*)malloc(sizeof(stack));
	temp->prev = NULL;
	temp->x = firstElement;
	return temp;
}*/
int checkParenthesis(char* arithExpr)
{
	
	int i=0,j=0;
	char* arr;
	arr = (char*)malloc(strlen(arithExpr));
	while (arithExpr[i] != '\0')
	{ 
		if ((arithExpr[i] == '(')||(arithExpr[i] == '[') ||(arithExpr[i] == '{'))
		{
			arr[j] = arithExpr[i];
			j++;
		}
		else if ((arithExpr[i] == ')') ||(arithExpr[i] == '}') ||(arithExpr[i] == ']'))
		{
			if ((j>0)&&((arithExpr[i] == ')')&&(arr[j-1] == '(')) || ((arithExpr[i] == ']')&&(arr[j-1] == '[')) || ((arithExpr[i] == '}')&& (arr[j-1] == '{')))
				j--;
			else return 0;
		}
		i++;
	}
	free(arr);
	if (j==0)
		return 1;
	else
		return 0;
}
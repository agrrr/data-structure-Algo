#include <stdio.h>
#include <stdlib.h>
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"
#include "BST.h"
#include "ex6.h"
#define MAX_LEN 256
//ex1
/*int main(int argc, const char * argv[]) 
{
    // declare variables to be used
    int i;
    int* pArr;
    int dominant = ERROR_VALUE;
    int dominantCtr;
	
    // get array size
    int size;
    scanf("%d", &size);
	pArr = (int*)malloc(sizeof(int) * size);
    // allocate array of indicated size
  
    
    // fill array's elements
    for (i = 0 ; i < size ; ++i) {
        scanf("%d", &pArr[i]);
    }
    
    // print array
    for (i = 0 ; i < size ; ++i) {
        printf("%d, ", pArr[i]);
    }
    printf("\n");
    
    // find dominant element
    findDominant(pArr, size, &dominant, &dominantCtr);
    if (ERROR_VALUE == dominant) {
        printf("no dominant element!\n");
    } else {
        printf("dominant element is %d with %d instances\n", dominant, dominantCtr);
    }
    
    // free allocated memory
    free(pArr);
    
    return 0;
}*/
//ex2
/*
int main(int argc, const char * argv[]) {

	// declare variables to be used
	int i;
	int* pArr;

	// get array size
	int size;
	scanf("%d", &size);

	// allocate array of indicated size
	pArr = (int*)malloc(sizeof(int) * size);

	// fill array's elements
	for (i = 0; i < size; ++i) {
		scanf("%d", &pArr[i]);
	}

	// print array
	for (i = 0; i < size; ++i) {
		printf("%d, ", pArr[i]);
	}
	printf("\n");

	printf("max element: %d\n", findMax(pArr, size));

	// free allocated memory
	free(pArr);

	return 0;
}
*/
//ex3
/*
int main(int argc, const char * argv[]) {

	// allocate an array to hold the arithmetic expression
	char arithExpr[MAX_LEN];

	// read the expression
	scanf("%s", arithExpr);

	// check if parenthesis are balanced
	if (checkParenthesis(arithExpr)) {
		printf("balanced\n");
	}
	else {
		printf("not balanced\n");
	}

	return 0;
}
*/
//ex4
/*int main(void) {

	// create the tree's root
	BST* pTree = createNode(10);

	insert(pTree, 10);
	insert(pTree, 6);
	insert(pTree, 13);
	insert(pTree, 2);
	insert(pTree, 8);
	insert(pTree, 20);
	insert(pTree, 7);
	insert(pTree, 15);
	insert(pTree, 9);

	printf("in-order:\n");
	printDataInOrder(pTree);
	printf("\n");

	printf("pre-order:\n");
	printDataPreOrder(pTree);
	printf("\n");

	printf("post-order:\n");
	printDataPostOrder(pTree);
	printf("\n");

	// free all memory allocated for the tree
	destroyTree(pTree);

	return 0;
}*/
//ex5
/*int main(int argc, const char * argv[]) {

	// initialize strings
	char strX[MAX_LEN];
	char strY[MAX_LEN];

	// read strings
	scanf("%s", strX);
	scanf("%s", strY);

	// find longest common substring among X,Y
	char* longestComnSubStr;
	longestComnSubStr = findLongestCmnSubStr(strX, strY);
	printf("%s\n", longestComnSubStr);

	// free memory allocated for the longest common substring
	free(longestComnSubStr);

	return 0;
}*/
//ex6
int main(int argc, const char * argv[]) {

	// declare variables
	int n, k, i;
	int* A;
	int* B;

	// get array size
	scanf("%d", &n);

	// allocate arrays
	A = malloc(sizeof(int) * n);
	B = malloc(sizeof(int) * n);

	// get array's maximal value
	scanf("%d", &k);

	// get array's content
	for (i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}

	// sort A
	countingSort(A, B, k, n);

	// print the sorted array
	for (i = 0; i < n; ++i) {
		printf("%d, ", B[i]);
	}
	printf("\n");

	// free allocated memory
	free(A);
	free(B);

	return 0;
}

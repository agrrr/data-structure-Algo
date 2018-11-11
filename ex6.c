/**********************************

*********************************/
#include <stdio.h>
#include <stdlib.h>
#include "ex6.h"

void countingSort(int* A, int* B, int k, int n) {
	int i, j;
	int* C = malloc(sizeof(int) * k);
	for (i = 0; i < k; i++) 
		C[i] = 0;
	for (j = 0; j < n; j++)
		C[A[j] - 1]++;
	for (i = 1; i < k; i++) 
		C[i] = C[i] + C[i - 1];
	for (j = n - 1; j >= 0; j--) {
		B[C[A[j] - 1] - 1] = A[j];
		C[A[j] - 1] = C[A[j] - 1] - 1;
	}
	free(C);
}
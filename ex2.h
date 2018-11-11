#ifndef ex2_h
#define ex2_h

#include <stdio.h>

#define BASE_CASE_SIZE 2
#define ERROR_VALUE -1 // indicates no dominant element was found

/**
 * Input:
 * 1. Pointer to an array of integers
 * 2. Array's size
 * 3. Pointer which will point to the dominant element in the array
 * 4. Pointer which will point to the number of instances of the dominant element in the array
 * Function operation:
 * Checks if there is a dominant element in the array (according to your divide-and-conquer algorithm).
 * If a dominant element exists, *pDominant gets this value and *pDominantCtr gets how many times the 
 * dominant element appears in the array.
 * If there is not a dominant element, *pDominant gets ERROR_VALUE and *pDominantCtr gets 0
 */
void findDominant(int* pArr, int size, int* pDominant, int* pDominantCtr);

#endif /* ex2_h */

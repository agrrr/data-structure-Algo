#ifndef ex6_h
#define ex6_h

/**
 * Input: an array A (of size n) holding integers in the range [1,k] ;
 * an empty array B (of size n), will hold copies of A's element in an ascending order ;
 * k - maximal value for an element ;
 * n - size of A,B
 * The function uses counting sort and copies A's elements into B in an ascending order.
 * Output: none
 */
void countingSort(int* A, int* B, int k, int n);

#endif /* ex6_h */

#ifndef ex5_h
#define ex5_h

#include <stdio.h>

/**
 * Input: strings X and Y
 * Output: longest common substring of X and Y
 * Function finds the longest common substring of X and Y using dynamic programming
 */
char* findLongestCmnSubStr(char* strX, char* strY);
/**
 * Input: strings X and Y, lengths of X and Y, a table F holding solutions of sub problems
 * Output: none
 * Function fills the talbe F with the solutions for the sub problems:
 * F[i][j] holds the length of the longest common substring between X[0:i-1] and Y[0:j-1]
 */
void fillSubProbsSols(char* strX, char* strY, int sizeX, int sizeY, int** F);
/**
 * Input: string X, table F holding solutions of sub proglems, number of F's rows (sizeX) and
 * number of F's columns (sizeY)
 * Output: pointer to the longest common substring (the array is dynamically allocated)
 * Function uses the table F in order to restore the longest common substring out of X
 */
char* restoreOptSolution(char* strX, int** F, int sizeX, int sizeY);
/**
 * Input: table F holding solutions of sub proglems, number of rows in F, number of columns in F,
 * pointers (pSolRow, pSolCol) to refer to solution's entry in F
 * Output: none
 * Function finds F's entry with maximal value, indicating the optimal solution. At the end, the
 * function sets pSolRow to point at the row index of the optimal solution and sets pSolCol to point
 * at the column index of the optimal solution
 */
void findLongestCmnSubStrStart(int** F, int rows, int cols, int* pSolRow, int* pSolCol);
#endif /* ex5_h */

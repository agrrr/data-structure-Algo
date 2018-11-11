/******************************************

* Ex 5
******************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ex5.h"

char* restoreOptSolution(char* strX, int** F, int sizeX, int sizeY) {

	// declare row and columns indices for optimal solution
	int optRow, optCol;

	// declare indices used when copying the optimal substring
	int currStrXIndex, currOptSubStrIndex, endIndex;

	// declare pointer to optimal solution
	char* longestCmnSubStr;

	// declare variable to hold length of optimal solution
	int optSolLen;

	// find indices of optimal solution
	findLongestCmnSubStrStart(F, sizeX + 1, sizeY + 1, &optRow, &optCol);

	// extract length of optimal solution
	optSolLen = F[optRow][optCol];

	// check if a solution exists
	if (0 == optSolLen) {
		// no common substring, return an empty string
		longestCmnSubStr = (char*)malloc(sizeof(char));
		*longestCmnSubStr = '\0';
		return longestCmnSubStr;
	}

	// allocate an array to hold the optimal solution
	longestCmnSubStr = (char*)malloc((optSolLen + 1) * sizeof(char));

	// compute index of solution's last character in X
	endIndex = optRow - 1;

	// copy the substring from X
	currOptSubStrIndex = 0;
	for (currStrXIndex = endIndex - optSolLen + 1; currStrXIndex <= endIndex; ++currStrXIndex) {
		longestCmnSubStr[currOptSubStrIndex] = strX[currStrXIndex];
		++currOptSubStrIndex;
	}
	// set the null-character at the end of the optimal substring
	longestCmnSubStr[optSolLen] = '\0';

	// return result
	return longestCmnSubStr;
}
void findLongestCmnSubStrStart(int** F, int rows, int cols, int* pSolRow, int* pSolCol) {

	// find entry with maximal value
	int maxVal = 0;
	int i = 0, j = 0, solRow = 0, solCol = 0;
	for (i = rows ; i >= 0; i--) {
		for (j = cols ; j >= 0; j--) {

			// check if should update maximal value
			if (maxVal < F[i][j]) {
				maxVal = F[i][j];
				solRow = i;
				solCol = j;
			}
		}
	}

	// set return values
	*pSolRow = solRow;
	*pSolCol = solCol;
}
/**
* Input: strings X and Y
* Output: longest common substring of X and Y
* Function finds the longest common substring of X and Y using dynamic programming
*/
char* findLongestCmnSubStr(char* strX, char* strY)
{
	
	//we make a array to store the solution, and we will fil; it with the solutions 
	int i, j, x = strlen(strX), y = strlen(strY), psolrow, psolcol;
	int ** table = (int**)malloc(x*sizeof(int));
	char*sol;
	for (i = 0;i <= x;i++)
	{
		if (i == 0)
		{
			table[i] = (int*)calloc(y+1, sizeof(int)); //initializing first column to be 0.
			i++;
		}
		table[i] = (int*)malloc((y+1)*sizeof(int));
		table[i][0] = 0; //initializing first row to be 0.
	}
	for (i = 0;i < x;i++)
	{
		for (j = 0;j < y;j++)
			if (strX[i] == strY[j])
				table[i+1][j+1] = table[i][j] + 1;
			else table[i+1][j+1] = 0;
	}
	findLongestCmnSubStrStart(table,x,y,&psolrow,&psolcol);
	i = psolrow - table[psolrow][psolcol];
	sol = (char*)malloc((table[psolrow][psolcol])*sizeof(char));
	j = 0;
	if (psolcol == 0 || psolrow == 0)
	{
		for (i = 0;i <= x;i++)
			free(table[i]);
		realloc(table, 0);
		return sol;
	}
	for (i =psolrow - table[psolrow][psolcol];i<psolrow;i++)
	{
		sol[j++] = strX[i];

	}
	sol[j] = '\0';
	for (i = 0;i <= x;i++)
		free(table[i]);
	realloc(table, 0);
	return sol;
}
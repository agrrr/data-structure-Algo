#ifndef ex3_h
#define ex3_h

#define MAX_LEN 256 // maximal length of an arithmetic expression

/**
 * Input:
 * 1. Pointer a string holding an arithmetic expression
 * 2. String's length
 * Function operation:
 * Checks if the parenthesis are balanced. Possible types are '(', ')', '[', ']', '{', '}'.
 * If balanced, returns 1. Otherwise, returns 0
 */
int checkParenthesis(char* arithExp);

#endif /* ex3_h */

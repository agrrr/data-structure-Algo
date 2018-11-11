/***********************************

*********************************/
#include<stdio.h>
/*
part one of the question -
i will use the Merg-Sort algorithem to get to the leafs , usuallt this kind of kod takes nlogn but i dont need to do all the mergings 
just check the leafs at the end,so it will take max O(logn)
i also wrote anothe code down findInN its time running it at most O(n) and its much simplier....
*/
int findMax(int* pArr, int size)
{
	static max = 0;
	if (size == 2)
		if (pArr[0] > pArr[1])
			return pArr[0];
	if (pArr[0] > pArr[(size / 2)-1])
		return findMax(pArr, size / 2);
	if (pArr[(size / 2)-1] > pArr[size - 1])
		return findMax(pArr + (size / 2)-1, size / 2);
}
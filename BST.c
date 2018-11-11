/******************************************

* Ex BST
******************************************/
#include "BST.h"
#include <stdio.h>
#include <stdlib.h>

int isLeaf(BST* pTree) {

	// check if both children are NULL
	return ((pTree->m_left == NULL) && (pTree->m_right == NULL));
}
BST* createNode(int data) {

	// allocate a new node
	BST* pNewNode = (BST*) malloc(sizeof(BST));
	pNewNode->m_data = data;
	pNewNode->m_left = NULL;
	pNewNode->m_right = NULL;

	// return the new node
	return pNewNode;
}
void addNode(int data, BST* pParentNode, int isRightChild) {

	// create the new node
	BST* pNewNode = createNode(data);

	// add as a child to the given node
	if (isRightChild) {
		pParentNode->m_right = pNewNode;
	} else {
		pParentNode->m_left = pNewNode;
	}
}
void insert(BST* pTree, int data)
{	
	if (data == pTree->m_data)
		return;
	else if (data > pTree->m_data)
		if (pTree->m_right == NULL)
			addNode(data, pTree, data > pTree->m_data);
		else
			insert(pTree->m_right,data);
	else if (data < pTree->m_data)
		if(pTree->m_left==NULL)
			addNode(data, pTree, data > pTree->m_data);
		else 
			insert(pTree->m_left, data);
	return;
}
void destroyTree(BST* pTree)
{
	if (pTree == NULL)
		return;
	if (isLeaf(pTree))
	{
		free(pTree);
		return;
	}
	destroyTree(pTree->m_left);
	pTree->m_left = NULL;
	destroyTree(pTree->m_right);
	pTree->m_right = NULL;
	free(pTree);
}
void printDataInOrder(BST* pTree)
{
	if (pTree == NULL)
		return;
	else if (isLeaf(pTree))
	{
		printf("%d ", pTree->m_data);
		return;
	}
	printDataInOrder(pTree->m_left);
	printf("%d ", pTree->m_data);
	printDataInOrder(pTree->m_right);
}
void printDataPostOrder(BST* pTree)
{
	if (pTree == NULL)
		return;
	else if (isLeaf(pTree))
	{
		printf("%d ", pTree->m_data);
		return;
	}
	printDataPostOrder(pTree->m_left);
	printDataPostOrder(pTree->m_right);
	printf("%d ", pTree->m_data);
}
void printDataPreOrder(BST* pTree)
{
	if (pTree == NULL)
		return;
	printf("%d ", pTree->m_data);
	printDataPreOrder(pTree->m_left);
	printDataPreOrder(pTree->m_right);
}

#ifndef BST_H_
#define BST_H_

#define TRUE 1
#define FALSE 0

typedef struct BST {

	int m_data; // data held at root
	struct BST* m_left; // left sub-tree
	struct BST* m_right; // right sub-tree
} BST;
/**
 * Returns TRUE if given tree is a leaf, otherwise FALSE
 * @param pTree pointer to the tree
 * @return TRUE if a leaf, FALSE if not a leaf
 */
int isLeaf(BST* pTree);
/**
 * Creates a new node holding given data
 * @param data data for the new node
 * @return a pointer to the new node (dynamically-allocated)
 */
BST* createNode(int data);
/**
 * Creates a new node holding given data and adds it as a child
 * of the given node.
 * @param data new node's data
 * @param pParentNode pointer to new node's parent
 * @param isRightChild indicates if the new node should be a right or a left child
 */
void addNode(int data, BST* pParentNode, int isRightChild);
/**
 * Inserts given value to the tree. If value exists, does nothing.
 * Otherwise, creates a new node with given data where this value
 * should be in a binary search tree
 * HINT: the function createNode() can help you
 * @param pTree pointer to the tree
 * @param data value to be added
 */
void insert(BST* pTree, int data);
/**
 * Traverses the tree and destroys each node.
 * When finished, destroys the root
 * @param pTree pointer to the tree to be destroyed
 */
void destroyTree(BST* pTree);
/**
 * Prints the data field of each node in in-order
 * @param pTree pointer to the tree
 */
void printDataInOrder(BST* pTree);
/**
 * Prints the data field of each node in pre-order
 * @param pTree pointer to the tree
 */
void printDataPreOrder(BST* pTree);
/**
 * Prints the data field of each node in post-order
 * @param pTree pointer to the tree
 */
void printDataPostOrder(BST* pTree);
#endif /* BST_H_ */

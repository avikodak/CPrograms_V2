/*
 *======================================================================
 *Project               	:
 *File Name             	: Vector.c
 *======================================================================
 *(1) Created on			: Sep 6, 2012
 *(2) Author			    : Avinash Kodakandla
 *(3) Version				:
 *(4) Description			:
 *(5) References			:
 *		Links
 *		  1)
 *		  2)
 *		Documents
 *		  1)
 *		  2)
 *		Video Tutorial
 *		  1)
 *		  2)
 *(6)Algorithm:
 * 			Input      :
 *			Output     :
 *			Steps  	   :
 *			Complexity :
 *
 *(7) Bugs :
 *      ==================================================================
 *		|    SNO		|	Description		|	Status		|	Priority |
 *      ==================================================================
 *		|				|					|				|			 |
 *		|				|					|				|			 |
 *		|				|					|				| 	 		 |
 *		|				|					|				|			 |
 *		|				|					| 				|			 |
 *		|				|					|				|			 |
 *		|				|					|				|			 |
 *		|				|					|				|		     |
 *		|				|					|				|			 |
 *		==================================================================
 * (8) Contacts:
 * 		Mobile : 9640161671
 * 		Email  : avikodak@gmail.com , kodakandlaavinash@yahoo.com
 * 				 kodakandlaavinash@gmail.com
 *
 *
 * Copyright © 2012 Avinash Kodakandla. All rights reserved
 *
 *========================================================================
 */

//Header File Declaration
#include<stdio.h>
#include<stdlib.h>
//Declarations (Structures , Global Variables , Functions)
typedef struct node {
	int nodeValue;
	struct node *left;
	struct node *right;
	struct node *parent;
} node;

node *root = null;

int main(int argc, char *argv) {
	return 0;
}

//Function Definitions


/*
 *=======================================================================
 * Function Name :
 * Inputs        :
 *
 * Outputs       :
 *
 * Algorithm     :
 * 		Steps
 * 		1)
 * 		2)
 * 		3)
 *
 * Functionality :
 *
 *
 *=======================================================================
 */
void InsertNode() {
	node *newNode, nodeValue, parentNode;
	printf("\nEnter Any Value");
	scanf("%d", &nodeValue);
	newNode = (node *) malloc(sizeof(node));
	newNode->nodeValue = nodeValue;
	newNode->left = null;
	newNode->right = null;
	if (root == null) {
		// Tree Is Empty
		newNode->parent = null;
	} else {
		// Tree Is Not Empty
		parentNode = GetCorrectPointerForInsertion(nodeValue);
		newNode->parent = parentNode;
	}
	return;
}

void DeleteNode(int element) {
	node *nodeToBeDeleted;
	nodeToBeDeleted = SearchNode(element);
	if (nodeToBeDeleted != null) {
		// Element Found
		node *nodeParent, *nodeRightChild;
		nodeParent = nodeToBeDeleted->parent;
		nodeRightChild = nodeParent->right;

	} else {
		// Element not found
		printf("\nElement Not Found");
		return;
	}
}

node *GetCorrectPointerForInsertion(int newNodeValue) {
	if (root == null) {
		return null;
	} else {
		node *traversalNode = root;
		while (1) {
			if (traversalNode->element > newNodeValue) {
				// traverse right side
				if (traversalNode->right == null) {
					return traversalNode;
				} else {
					traversalNode = traversalNode->right;
				}
			} else {
				// traverse left side
				if (traversalNode->left == null) {
					return traversalNode;
				} else {
					traversalNode = traversalNode->left;
				}

			}
		}
	}
}

node *SearchNode(int key) {
	if (root == null) {
		return null;
	} else {
		node *traversalNode = root;
		while (1) {
			if (traversalNode->element == key) {
				return traversalNode;
			}
			if (traversalNode->element > newNodeValue) {
				// traverse right side
				if (traversalNode->right == null) {
					return null; // Element Not Found
				} else {
					traversalNode = traversalNode->right;
				}
			} else {
				// traverse left side
				if (traversalNode->left == null) {
					return null; // Element Not Found
				} else {
					traversalNode = traversalNode->left;
				}
			}
		}
	}
}

void PostOrderTraversal() {

}

void PreOrderTraversal() {

}

void InOrderTraversal() {

}

//
//	0 root 1 left 2 right
//
int GetNodeLeftChildOrRightChild(node *element) {
	node *nodeParent;
	if (element->parent != null) {
		nodeParent = element->parent;
		if (nodeParent->left == element) {
			return 1;
		} else {
			return 2;
		}
	} else {
		return 0;
	}
}

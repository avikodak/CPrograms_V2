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

//PreProcessor Directives


//Declarations (Structures , Global Variables , Functions)
typedef struct node{
	int number;
	struct node *next;
} node;

// Root Declaration
node **root = null;
void create();
node *GetLastNode();
node *SearchForElement(int nodeValue);

int main(int argc,char *argv)
{
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
void create(){
	node *newNode,*lastNode;
	if(*root == null){
		*root = (node *)malloc(sizeof(node));
	}
	else
	{
		newNode = (node *)malloc(sizeof(node));
		lastNode = GetLastNode();
		lastNode->next = newNode;
		newNode->next = null;
	}
}

node *GetLastNode()
{
	node *traverseNode = root;
	if(traverseNode != null){
		while(traverseNode->next != null){
			traverseNode = traverseNode->next;
		}
	}
	return traverseNode;
}



node *SearchForElement(int nodeValue){
	node *traverseNode = root;
	if(traverseNode != null){
		while(traverseNode->element != nodeValue){
			if(traverseNode->next != null){
				traverseNode = traverseNode->next;
			}
			else
			{
				return null;
			}
		}
	}
	return traverseNode;
}

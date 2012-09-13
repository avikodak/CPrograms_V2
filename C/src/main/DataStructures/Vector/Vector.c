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
int VECTOR_SIZE=10;
int SIZE_INCREMENTS= 5;
int NO_OF_ELEMENTS=0;
int vector[VECTOR_SIZE];

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
void insertAtRank(int rank,int element){
	if(rank >= VECTOR_SIZE){
		// increment strategy
	}
	else
	{
		if(vector[rank] > 0){
			// Already element is found
			if(NO_OF_ELEMENTS + 1 < VECTOR_SIZE ){
				// Enough Space to Allocate the new element
				moveElementsFromRankRight(rank,1);
				vector[rank] = element;
				// Increasing the number of elements present in the vector
				NO_OF_ELEMENTS++;
			}
			else
			{
				//Allocate the space using the growth/ tight strategy

			}
		}
	}
}

void deleteAtRank(int rank){
	if(rank < NO_OF_ELEMENTS){
		// Elements Present
		moveElementsFromRank(rank,-1);
		NO_OF_ELEMENTS--;
	}else{
		// Element Not Present
		printf("\nInvalid Rank . Please provide valid rank");
	}

}

void tightStrategy(){
	int elementsToBeIncreased = VECTOR_SIZE + SIZE_INCREMENTS ;
	vector = (int *)realloc(vector,elementsToBeIncreased*sizeof(int));
	if(vector != null){
		// Memory Allocated
		VECTOR_SIZE = elementsToBeIncreased;
		return;
	}
	else
	{
		// Memory Has not been allocated
		exit(1);
	}
}

void growthStrategy(){
	int elementsToBeIncreased = VECTOR_SIZE * 2 ;
		vector = (int *)realloc(vector,elementsToBeIncreased*sizeof(int));
		if(vector != null){
			// Memory Allocated
			VECTOR_SIZE = elementsToBeIncreased;
			return;
		}
		else
		{
			// Memory Has not been allocated
			exit(1);
		}
}

//Left -1 and right +1
void moveElementsFromRank(int rank,int direction){
	int counter=rank;
	if(direction==1){
		for(;counter<NO_OF_ELEMENTS-rank;counter++){
			vector[counter+1] = vector[counter];
		}
	}
	else{
		for(;counter<NO_OF_ELEMENTS-rank;counter++){
			vector[counter] = vector[counter+1];
		}
	}
	return;
}

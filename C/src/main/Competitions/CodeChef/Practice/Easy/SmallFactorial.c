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
#include<string.h>
//Declarations (Structures , Global Variables , Functions)
#define MAX 300
void CalculateFactorial(char *);

int factorial[MAX];
int main(int argc,char *argv)
{
	char number[9];
	printf("\nEnter the Number");
	scanf("%s",&number);
	CalculateFactorial(number);
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
void CalculateFactorial(char *number)
{
	int strLength = strlen(number),digit;
	char *lastCharacter;
	lastCharacter = number + (strLength - 1);
	// Getting the int value of the character
	// Converting the character into the int value
	digit = *lastCharacter - '0';
}

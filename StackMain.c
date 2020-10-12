/*
 * Program implementation for stack to give a program perspective from a real life perspective.
 *
 * This is the main entry module for the program.
 */



// @region		Integrated includes //

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

// @endregion //



// @region		MACROS //

/**
 * A macro which returns the size of the array.
 * @return	[int]	[The size of the array]
 */
#define		ArraySize(x) 	( sizeof(x) / sizeof(x)[0] )

// @endregion



// @region Global variables //

int sizeOfStack;

// @endrgion //


// @region		User-defined includes //

#include "BooleanTypeDef.c"
#include "FuncDeclare.c"
#include "Alteration.c"
#include "Utilities.c"
#include "StackMenu.c"

// @endregion //



/**
 * Description: The main entry point of the program.
 * @return	[int]		[always 0 to exit the program]
 */
int main(){
	// Clearing the screen for any unwanted previously written outputs in the terminal. //
	ClearTerminal();

	// Prompting the user to give a size for the stack. //
	printf("Enter the size of the stack: ");

	PushLine();		// Pushing a next line via a function. //

	sizeOfStack = 0;
	scanf("%d", &sizeOfStack);		// Taking the input from the user to determine what the size of the stack will be. //

	int StackArray[sizeOfStack];	// Declaring the array with the inputted value given by the user. //

	InitArray(StackArray);		// Initializing the array with default values. //
	ClearTerminal();

	ShowStackMenu(StackArray);	// Showing the menu for the user to make a choice to operate the stack. //

	getch();

	return 0;
}
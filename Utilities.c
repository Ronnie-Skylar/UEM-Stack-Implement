/*
	This module contains all the miscellaneous methods for processing the main stack.
 */



/**
 * Clears the terminal of any previous messages presented.
 */
void ClearTerminal(){
	system("cls");
}


/**
 * Description: A simple function to go to the next line
 * 				via the escape literal "\n".
 * 				
 * @return	[void]
 */
void PushLine(){
	printf("\n");
}

/**
 * Description: Prints all the array elements depending on the size passed into the parameter.
 * @param arr  The array whose elements needs to be printed.
 * @param size The size of the array up until where the elements needs to be printed.
 */
void ArrayPrint(int arr[]){

	if(top != -1)
		printf("The elements of the stack are: ");
	else{
		printf("The stack is empty.");
	}
	PushLine();

	for(int i = 0; i < sizeOfStack; i++){
		if(i > top)
			break;
		printf("%d ", arr[i]);
	}
	PushLine();
}

/**
 * Initializes the array with default values. Otherwise it will be presented with garbage values. 
 * @param arr  The array which needs to be given default values for int which is 0.
 * @param size The size of the array.
 */
void InitArray(int arr[]){
	for(int i = 0; i < sizeOfStack; i++)
		arr[i] = 0;
}

/**
 * Shows the user a prompt that they have to press a button to procees with the control flow of the program.
 */
void PromptToPressKey(){
	printf("Press any key to proceed.");
	getch();
}

/**
 * Returns the postfix of a number.
 * @param  number The number which will be check to determine the postfix string.
 * @return        The postfix string. e.g. 1st, 2nd, 34th
 */
void ReturnNumberPostfix(char* pzPostfix, int ArraySize, int number){
	char _positionPostfix[5] = "";

	if(number == 1)
		strncpy(_positionPostfix, "st", ArraySize(_positionPostfix) - 1);
	else if(number == 2)
		strncpy(_positionPostfix, "nd", ArraySize(_positionPostfix) - 1);
	else if(number == 3)
		strncpy(_positionPostfix, "rd", ArraySize(_positionPostfix) - 1);
	else
		strncpy(_positionPostfix, "th", ArraySize(_positionPostfix) - 1);

	strncpy(pzPostfix, _positionPostfix, ArraySize - 1);
}

/**
 * Returns if the stack is empty or not
 * @return boolean value (true / false) [user-defined data-type]
 */
boolean IsStackEmpty(){
	//(top == -1)? return true : return false;
	if(top == -1)
		return true;
	else
		return false;
}


boolean IsStackFull(){
	if(top == sizeOfStack - 1)
		return true;
	else
		return false;	
}

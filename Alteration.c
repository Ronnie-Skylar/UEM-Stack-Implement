/*
	This module contains variables and methods which keep track of the 
	stack, insert element or eliminate elements.
 */


// @region 		Global variables

int top = -1;

// @endregion



void StackInsert(int StackArray[], int element){

	ClearTerminal();

	StackArray[++top] = element;

	char _postfix[5];
	ReturnNumberPostfix(_postfix, ArraySize(_postfix), top+1);

	printf("The inputted value %d has been inserted in the %d%s position.", 
		element, top + 1, _postfix
	);

	PushLine();
	PromptToPressKey();

	return;
}

void StackRemove(int StackArray[]){

	ClearTerminal();

	if(IsStackEmpty()){
		printf("The stack is empty. There are no elements to remove from it.");
		PushLine(), PushLine();
		PromptToPressKey();
		return;
	}

	char _postfix[5];
	ReturnNumberPostfix(_postfix, ArraySize(_postfix), top+1);

	printf("The element %d at %d%s position has been popped", 
		StackArray[top], top + 1, _postfix
	);

	PushLine();
	PromptToPressKey();

	top--;

	return;
}
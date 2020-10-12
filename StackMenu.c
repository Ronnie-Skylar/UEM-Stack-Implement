/*
	This module contains all the menu driven UI for the user and the process methods for
	the users input.
 */



/**
 * Shows the menu options for the user to operate the stack.
 */
void ShowStackMenu(int StackArray[]){

	printf("Enter the number to execute an operation: ");
	PushLine();

	printf("1. Push (Insert) element."), PushLine();
	printf("2. Pop (Remove) element."), PushLine();
	printf("3. Show elements."), PushLine();
	printf("4. Quit."), PushLine();

	int _userChoice;

	scanf("%d", &_userChoice);


	ProcessMenuChoice(StackArray, _userChoice);
	
}

void ProcessMenuChoice(int StackArray[], int choice){

	enum e_ChoiceNames{
		e_Choice_Push = 1,
		e_Choice_Pop = 2,
		e_Choice_Show = 3,
		e_Choice_Exit = 4
	};

	do{
		switch(choice){

			case ((int)e_Choice_Push):{

				if(IsStackFull()){
					ClearTerminal();
					printf("The stack is full and thus no more elements can be pushed into it.");
					PushLine(), PushLine();
					PromptToPressKey();
					ClearTerminal();
				}
				else{
					int input;
					ClearTerminal();
					printf("Enter the value that you want to push into the stack.");
					PushLine();
					scanf("%d", &input);
					StackInsert(StackArray, input);
					ClearTerminal();	
				}
				
				ShowStackMenu(StackArray);

				break;
			}

			case ((int)e_Choice_Pop):{
				ClearTerminal();
				StackRemove(StackArray);
				ClearTerminal();
				ShowStackMenu(StackArray);
				break;
			}

			case (int)e_Choice_Show:{
				ClearTerminal();
				ArrayPrint(StackArray);
				PromptToPressKey();
				ClearTerminal();
				ShowStackMenu(StackArray);
				break;
			}

			case (int)e_Choice_Exit:{
				ClearTerminal();
				printf("Program has been terminated.");
				getch();
				exit(0);
				break;
			}

			default:{
				ClearTerminal();
				printf("The given input is invalid.");
				PushLine();
				PromptToPressKey();
				ClearTerminal();
				ShowStackMenu(StackArray);
				break;
			}
		}
	}
	while(true);

}
/* -------------------------------------------
Name:Eberechi Ogunedo
Student number: 117277160
Email: eokengwu@myseneca.ca
Section: U
Date:11/14/2018
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contactHelpers.h"

// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:



//------------------------------------------------------
// Function Definitions
//------------------------------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+

// clearKeyboard:  Empty function definition
//clears the buffer
void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block
}

// pause: Empty function definition goes here:
//pauses execution ...user has to click on <Enter> to continue
void pause(void) 
{
	printf("(Press Enter to Continue)");
	clearKeyboard();

}


// getInt: Empty function definition goes here:
//Prompts the user for input and makes sure it is an integer
int getInt(void) 
{
	
	char NL = 'x';
	int value = 0;
	int stop = -1;
	while (stop == -1) {
		scanf("%d%c", &value, &NL);
		if (NL == '\n') {
			stop = 0;
		}
		else
		{
			clearKeyboard();
			printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		}		
	}
	return value;
}


// getIntInRange: Empty function definition goes here:

int getIntInRange(int min, int max) 
{
	int value = getInt();
	while (value < min || value > max) 
	{
		printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		//clearKeyboard();
		value = getInt();
	}
	return value;
}

// yes: Empty function definition goes here:
//Prompts user to choose between y or Y and n or N , validates their selection and returns an integer 
int yes(void) 
{
	char response, end;
	int value = 0;
	int stop = 1;
	
	while (stop == 1)
	{
		scanf(" %c%c", &response, &end);
		if ((response == 'Y' || response == 'y') && end == '\n')
		{
			stop = 0;
			value = 1;
		}
		else if ((response == 'N' || response == 'n') && end == '\n')
		{
			stop = 0;
			value = 0;
		}
		else 
		{
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");
			clearKeyboard();
		}
			
	}
		
	return value;
}


// menu: Empty function definition goes here:
//Displays menu and makes sure user enters a number with the range of the menu options and returns the selected number after
int menu(void) 
{
	int option;
	
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit\n");
	
	printf("\nSelect an option:> ");
	option = getIntInRange(0, 6);

	return option;
}


// contactManagerSystem: Empty function definition goes here:
//Controls menu display and prompts user to select an option
void contactManagerSystem(void)
{
	
	int flag = 1;
	int response;
	int select;
	

	while (flag == 1)
	{
		
		select = menu();
		switch (select) {
		case 0:
			printf("\nExit the program? (Y)es/(N)o: ");
			response = yes();
			if (response == 0) {
				printf("\n");
			}
			else
			{
				flag = 0;
			}
			break;
			/*else if (response == 0)
			{

			}*/
		case 1:
		
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		
		case 2:
		
			printf("\n<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		
		case 3:
		
			printf("\n<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		
		case 4:
		
			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		
		case 5:
		
			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			break;
		
		case 6:
		
			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
			break;
		
		}
	}
	printf("\nContact Management System: terminated\n");
}

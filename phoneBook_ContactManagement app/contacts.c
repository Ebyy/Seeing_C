/* -------------------------------------------
Name:Eberechi Ogunedo
Student number: 117277160
Email: eokengwu@myseneca.ca
Section: U
Date:11/13/2018
----------------------------------------------
Assignment: 2
Milestone:  1
---------------------------------------------- */

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
#include "contactHelpers.h"

// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-1 Milestone-4 |
// |        function definitions below...            |
// +-------------------------------------------------+

// getName:
void getName(struct Name* name) {

	//create response variable
	int response;

	// Contact Name Input:
	printf("Please enter the contact's first name: ");
	scanf("%30[^\n]", name->firstName);
	clearKeyboard();

	printf("Do you want to enter a middle initial(s)? (y or n): ");
	response = yes();

	if (response == 1)
	{
		printf("Please enter the contact's middle initial(s): ");
		scanf("%6[^\n]", name->middleInitial);
		clearKeyboard();
	}

	printf("Please enter the contact\'s last name: ");
	scanf("%35[^\n]", name->lastName);
	clearKeyboard();
};


// getAddress:
void getAddress(struct Address * address) {
	//create response variable
	int response;

	//Contact Address Input
	printf("Please enter the contact's street number: ");
	address->streetNumber = getInt();
	if (address->streetNumber <= 0) 
	{
		//clearKeyboard();
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		address->streetNumber = getInt();
	}

	printf("Please enter the contact's street name: ");
	scanf("%40[^\n]", address->street);
	clearKeyboard();

	printf("Do you want to enter an apartment number? (y or n): ");
	response = yes();
	if (response == 1)
	{
		printf("Please enter the contact's apartment number: ");
		address->apartmentNumber = getInt();
		if (address->apartmentNumber <= 0)
		{
			//clearKeyboard();
			printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
			address->apartmentNumber = getInt();
		}
	}

	
	printf("Please enter the contact's postal code: ");
	scanf("%7[^\n]", address->postalCode);
	clearKeyboard();
	
	printf("Please enter the contact's city: ");
	scanf("%40[^\n]", address->city);
	clearKeyboard();
	
};


// getNumbers:
void getNumbers(struct Numbers * numbers) {
	//create response variable
	int response;

	// Contact Numbers Input:
	
	printf("Please enter the contact's cell phone number: ");
	scanf("%10[^\n]", numbers->cell);
	clearKeyboard();

	printf("Do you want to enter a home phone number? (y or n): ");
	response = yes();
	if (response == 1)
	{
		printf("Please enter the contact's home phone number: ");
		scanf("%10[^\n]", numbers->home);
		clearKeyboard();
	}

	printf("Do you want to enter a business phone number? (y or n): ");
	response = yes();

	if (response == 1)
	{
		printf("Please enter the contact's business phone number: ");
		scanf("%10[^\n]", numbers->business);
		clearKeyboard();
	}

};

// +-------------------------------------------+
// | ====== Assignment 2 | Milestone 1 ======= |
// +-------------------------------------------+

// getContact:
// Define Empty function definition below:
void getContact(struct Contact *contact) {
	getName(&contact->name);
	getAddress(&contact->address);
	getNumbers(&contact->numbers);
};

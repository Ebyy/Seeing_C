/*
Name: Eberechi Ogunedo
Student ID: 117277160
Section: U
Date: 09/18/2018
*/

#define _CRT_SECURE_NO_WARNINGS // disables error warnings

#include <stdio.h> // specifies library we are using

int main(void) {
	
	int loonies = 0; //creates a variable loonies of integer type and initialises it to 0
	int quarters = 0; //creates a variable quarters of integer type and initialises it to 0
	int dimes = 0; //creates a variable dimes of integer type and initialises it to 0
	int nickels = 0; //creates a variable nickels of integer type and initialises it to 0
	int pennies = 0; //creates a variable pennies of integer type and initialises it to 0

	float amount_owed; //creates a variable amount_owed of float type
	float tax_calculated; //creates a variable tax_calculated of float type 
	int adjusted_amountOwed; //creates a variable adjusted_amountOwed of integer type
	int balance_owed; //creates a variable balance_owed of integer type and 

	// Prompt the user for input and copy it to amount_owed variable

	printf("Please enter the amount to be paid: $"); //prompt
	scanf("%f", &amount_owed); //input copied

	// Calculate GST tax and amount due inclusive of the calculated tax and print them out

	tax_calculated = 0.13 * amount_owed + 0.005; // calculates the tax(GST)
	printf("GST: %.2f\n", tax_calculated); //prints out the calculated tax on the amount_owed

	amount_owed += tax_calculated; //calculates amount_owed inclusive of tax(GST)

	printf("Balance owing: $%.2f\n", amount_owed);

	// Number of loonies owed

	adjusted_amountOwed = amount_owed * 100;
	
	loonies = (int)adjusted_amountOwed / 100; // Loonies owed
	balance_owed = adjusted_amountOwed % 100; // Balance

	printf("Loonies required: %d, balance owing $%.2f\n", loonies, (float)balance_owed / 100); //prints out loonies owed and balance left

	// Number of quarters owed

	quarters = (int)balance_owed / 25; // quarters owed
	balance_owed = balance_owed % 25; // balance calaculated

	printf("Quarters required: %d, balance owing $%.2f\n", quarters, (float)balance_owed / 100); //prints out quarters owed and balance left

	// Number of dimes owed

	dimes = (int)balance_owed / 10; // dimes owed
	balance_owed = balance_owed % 10; //balance calculated

	printf("Dimes required: %d, balance owing $%.2f\n", dimes, (float)balance_owed / 100);//prints out dimes owed and balance left

	// Number of nickels owed

	nickels = (int)balance_owed / 5; // nickels owed
	balance_owed = balance_owed % 5; //balance calculated

	printf("Nickels required: %d, balance owing $%.2f\n", nickels, (float)balance_owed / 100); //prints out nickels owed and balance left

	//Number of pennies owed

	pennies = (int)balance_owed / 1; //pennies owed
	balance_owed = balance_owed % 1; //balance calculated

	printf("Pennies required: %d, balance owing $%.2f\n", pennies, (float)balance_owed / 100); //prints out pennies owed and balance left

	return 0; // End of script
}
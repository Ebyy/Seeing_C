/*
Name: Eberechi Ogunedo
Student number: 117277160
Email:eokengwu@myseneca.ca
Workshop:05
Section:U
Date:10/9/2018
*/

#define _CRT_SECURE_NO_WARNINGS
//structure.c
#include <stdio.h>

#define SIZE 2// Define Number of Employees "SIZE" to be 2


//Employee_Data.h
//Struct Employee_Data declared
struct Employee_Data
{
	int employee_ID;
	int age;
	double salary;
};


/* main program */
int main(void) {

	int option = 0;
	int counter; //counter
	int valid = 0; // valid entry variable
	struct Employee_Data emp[SIZE] = { {0,0,0}, {0,0,0} }; //instance of employee_data struct created

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero


	printf("---=== EMPLOYEE DATA ===---\n\n");

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("0. Exit\n\n");
		printf("Please select from the above options: ");
		// Capture input to option variable
		scanf("%d", &option);

		printf("\n");

		switch (option) {
		case 0:
			printf("Exiting Employee Data Program. Good Bye!!!\n");   // Exit the program

			break;
		case 1: // Display Employee Data
				// @IN-LAB

			printf("EMP ID  EMP AGE EMP SALARY\n");
			printf("======  ======= ==========\n");
			// Use "%6d%9d%11.2lf" formatting in a   
			// printf statement to display
			// employee id, age and salary of 
			// all  employees using a loop construct 
			for (counter = 0;counter < SIZE; counter++)
			{
				printf("%6d%9d%11.2lf\n", emp[counter].employee_ID, emp[counter].age, emp[counter].salary);
			}
			printf("\n");
			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;
		case 2:	// Adding Employee
			printf("Adding Employee\n");
			printf("===============\n");
			for (counter=0;counter < SIZE; counter++)
			{
				//check if array is full and print full output message
				if (emp[counter].employee_ID != 0 && valid == SIZE)
				{ 
					printf("ERROR!!! Maximum Number of Employees Reached\n\n");
				}
				else
				{
					//prompt for user input to fill valid space in the struct sample

					printf("Enter Employee ID: ");// Check for limits on the array and add employee 
					scanf("%d", &emp[valid].employee_ID);// data accordingly. 

					printf("Enter Employee Age: ");
					scanf("%d", &emp[valid].age);

					printf("Enter Employee Salary: ");
					scanf("%lf", &emp[valid].salary);
					printf("\n");
					valid++;//increment valid employee variable
				}
				break;
			}
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0;
}



//PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 111
Enter Employee Age: 34
Enter Employee Salary: 78980.88

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 112
Enter Employee Age: 41
Enter Employee Salary: 65000

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
   111       34   78980.88
   112       41   65000.00

1. Display Employee Information
2. Add Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/

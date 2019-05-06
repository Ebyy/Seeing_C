/*
Name: Eberechi Ogunedo
Student number: 117277160
Email: eokengwu@myseneca.ca
Workshop: 05
Section:U
Date: 10/12/2018
*/

// Copy your source code from in_lab file to here
// Expand the option list to include option 3 & 4 after 
// option 2. as following
// "3. Update Employee Salary"
// "4. Remove Employee"

#define _CRT_SECURE_NO_WARNINGS
//structure.c
#include <stdio.h>

#define SIZE 4// Define Number of Employees "SIZE" to be 4


//Employee_Data.h
//Struct Employee_Data declared
struct Employee_Data
{
	int employee_ID;
	int age;
	double salary;
};


/* main program */
int main(void)
{

	int option = 0;
	int counter = 0; //counter
	int array_counter = 0; // second counter
	int valid = 0; // valid entry variable
	int empty_spot; //empty spot variable
	int selected_ID = 0; //selected ID for editing
	struct Employee_Data emp[SIZE] = { {0} }; //instance of employee_data struct created

	// Declare a struct Employee array "emp" with SIZE elements 
	// and initialize all elements to zero


	printf("---=== EMPLOYEE DATA ===---\n\n");

	do {
		// Print the option list
		printf("1. Display Employee Information\n");
		printf("2. Add Employee\n");
		printf("3. Update Employee Salary\n");
		printf("4. Remove Employee\n");
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
			for (counter = 0; counter < SIZE; counter++)
			{
				if (emp[counter].employee_ID > 0)
				{
					printf("%6d%9d%11.2lf\n", emp[counter].employee_ID, emp[counter].age, emp[counter].salary);
				}

			}
			printf("\n");
			// The loop construct will be run for SIZE times 
			// and will only display Employee data 
			// where the EmployeeID is > 0

			break;
		case 2:	// Adding Employee
			printf("Adding Employee\n");
			printf("===============\n");


			if (valid < SIZE)
			{
				for (array_counter = 0; array_counter < SIZE; array_counter++)// nested loop to go through slots individually and replace negative or zero values with input from user
				{
					if (emp[array_counter].employee_ID <= 0) //check for slots with 0 or negative values
					{
						empty_spot = array_counter;
						array_counter = SIZE;//break out of loop
					}

				}
				//prompt for user input to fill valid space in the struct sample

				printf("Enter Employee ID: ");// Check for limits on the array and add employee 
				scanf("%d", &emp[empty_spot].employee_ID);// data accordingly. 

				printf("Enter Employee Age: ");
				scanf("%d", &emp[empty_spot].age);

				printf("Enter Employee Salary: ");
				scanf("%lf", &emp[empty_spot].salary);
				printf("\n");
				valid++;//increment valid employee variable
			}
			// print message to let user know the no empty slot
			else
			{
				printf("ERROR!!! Maximum Number of Employees Reached\n\n");
			}
			break;
		case 3: // update an already saved input and alter values
			printf("Update Employee Salary\n");
			printf("======================\n");
			//take input from user
			counter = 0;
			printf("Enter Employee ID: ");// Check for limits on the array and add employee 
			scanf("%d", &selected_ID);// data accordingly.

			do
			{
				if (counter == (SIZE - 1))
				{
					printf("*** ERROR: Employee ID not found! ***\n");
					printf("Enter Employee ID: ");// Check for limits on the array and add employee 
					scanf("%d", &selected_ID);// data accordingly.
					counter = 0;
				}
				counter++;

			} while (selected_ID != emp[counter].employee_ID);

			printf("The current salary is %.2lf\n", emp[counter].salary);
			printf("Enter Employee New Salary: ");
			scanf("%lf", &emp[counter].salary);
			printf("\n");
			break;
		case 4: // remove employee by settinng the value to a negative value
			printf("Remove Employee\n");
			printf("===============\n");
			//take input
			counter = 0;
			printf("Enter Employee ID: ");// Check for limits on the array and add employee 
			scanf("%d", &selected_ID);// data accordingly.

			do
			{
				if (counter == (SIZE - 1))
				{
					printf("*** ERROR: Employee ID not found! ***\n");
					printf("Enter Employee ID: ");// Check for limits on the array and add employee 
					scanf("%d", &selected_ID);// data accordingly.
					counter = 0;
				}
				counter++;
				

			} while (selected_ID != emp[counter].employee_ID);

			printf("Employee %d will be removed\n\n", emp[counter].employee_ID);
			emp[counter].employee_ID = -emp[counter].employee_ID; // value set to negative
			valid--;
			break;
		default:
			printf("ERROR: Incorrect Option: Try Again\n\n");
		}

	} while (option != 0);


	return 0;
}



// Create two switch-cases for option 3 & 4 after case 2. 
// Implement "Update Salary" and "Remove Employee" 
// functionality as per instructions
// inside the relevant case statements







// PROGRAM OUTPUT IS SHOW BELOW

/*
---=== EMPLOYEE DATA ===---

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 5

ERROR: Incorrect Option: Try Again

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 222
Enter Employee Age: 22
Enter Employee Salary: 22222.22

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 333
Enter Employee Age: 33
Enter Employee Salary: 33333.33

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 444
Enter Employee Age: 44
Enter Employee Salary: 44444.44

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 555
Enter Employee Age: 55
Enter Employee Salary: 55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
ERROR!!! Maximum Number of Employees Reached

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   33333.33
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 3

Update Employee Salary
======================
Enter Employee ID: 123
*** ERROR: Employee ID not found! ***
Enter Employee ID: 321
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
The current salary is 33333.33
Enter Employee New Salary: 99999.99

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
333       33   99999.99
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 4

Remove Employee
===============
Enter Employee ID: 789
*** ERROR: Employee ID not found! ***
Enter Employee ID: 987
*** ERROR: Employee ID not found! ***
Enter Employee ID: 333
Employee 333 will be removed

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 2

Adding Employee
===============
Enter Employee ID: 666
Enter Employee Age: 66
Enter Employee Salary: 66666.66

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 1

EMP ID  EMP AGE EMP SALARY
======  ======= ==========
222       22   22222.22
666       66   66666.66
444       44   44444.44
555       55   55555.55

1. Display Employee Information
2. Add Employee
3. Update Employee Salary
4. Remove Employee
0. Exit

Please select from the above options: 0

Exiting Employee Data Program. Good Bye!!!

*/

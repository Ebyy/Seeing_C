//--------------------------------------------------
// Name:     Eberechi Ogunedo      
// Student Number: 117277160
// Email:          eokengwu@myseneca.ca
// Section:        u
// Workshop:       04
//--------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS

// Place your code below
#include <stdio.h>
#define size 10 //max number of days allowed set to constant size

int main(void) 
{
	//declare variables days and counter
	int days; 
	int counter;
	int high_day = 1;
	int low_day = 1;
	int highest_temp;
	int lowest_temp;
	float average_temp;
	int max_check_day;
	float total_temp = 0;
	
	//declare 2 parrallel arrays - high_temp and low_temp
	int high_temp[size];
	int low_temp[size];
	
	printf("---=== IPC Temperature Calculator V2.0 ===---\n"); //header printed

	//prompt user to enter number of days and scan entered number to buffer

	printf("Please enter the number of days, between 3 and 10, inclusive: ");
	scanf("%d", &days);

	//set check to ensure user enters the right number of days according to the restrictions specified
	while (days < 3 || days > 10) 
	{
		printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
		scanf("%d", &days);
	}

	printf("\n"); 

	//initialising and filling the two arrays using a for loop to prompt user for input and storing the input accordingly
	for (counter = 0; counter < days; counter++)
	{
		printf("Day %d - High: ", counter + 1);
		scanf("%d", &high_temp[counter]);

		printf("Day %d - Low: ", counter + 1);
		scanf("%d", &low_temp[counter]);
		// make sure high temp entered by user is greater than low temp.
		while (high_temp[counter] < low_temp[counter])
		{
			printf("High temp cannot be lower than low temp!!!\n");
			printf("Day %d - High: ", counter + 1);
			scanf("%d", &high_temp[counter]);

			printf("Day %d - Low: ", counter + 1);
			scanf("%d", &low_temp[counter]);
		}
	}

	//printing out the values in the two arrays to match specified format
	printf("\nDay  Hi  Low\n");
	for (counter = 0; counter < days; counter++)
	{
		printf("%d %4d %5d\n", counter + 1, high_temp[counter], low_temp[counter]);
	}
	
	// initialise highest and lowest temp to the first value in the array
	highest_temp = high_temp[0];
	lowest_temp = low_temp[0];

	// iterate over the array and assign the highest and lowest values to the appropriate variable and print it out to screen
	for (counter = 0; counter < days; counter++)
	{
		if (high_temp[counter] > highest_temp)
		{
			highest_temp = high_temp[counter];
			high_day = counter + 1;
		}
		if (low_temp[counter] < lowest_temp)
		{
			lowest_temp = low_temp[counter];
			low_day = counter + 1;
		}
	}
	printf("\nThe highest temperature was %d, on day %d", highest_temp, high_day);
	printf("\nThe lowest temperature was %d, on day %d\n", lowest_temp, low_day);
	
	//prompt the user to enter a day and calculate the average from 0 to the entered number of days using loops and conditionals
	printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", days);
	scanf("%d", &max_check_day);

	while (max_check_day == 0 || max_check_day > 0)
	{
		if (max_check_day == 0 || max_check_day > days)
		{
			printf("\nInvalid entry, please enter a number between 1 and %d, inclusive: ", days);
			scanf("%d", &max_check_day);
		}
		else if (max_check_day > 0 && max_check_day <= days)
		{

			for (counter = 0; counter < max_check_day; counter++)
			{
				total_temp += (float)(high_temp[counter] + low_temp[counter]);	
			}
			average_temp = (total_temp / max_check_day)/ 2;
			printf("\nThe average temperature up to day %d is: %.2f\n", max_check_day,average_temp);
			
			total_temp = 0;

			printf("\nEnter a number between 1 and %d to see the average temperature for the entered number of days, enter a negative number to exit: ", days);
			scanf("%d", &max_check_day);
			
		}
	}
		
	printf("\nGoodbye!\n");

	return 0; //end of program
}


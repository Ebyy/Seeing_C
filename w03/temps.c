// Name: Eberechi Ogunedo
// Student Number: 117277160
// Email: eokengwu@myseneca.ca
// Section: U
// Workshop: 03

#define _CRT_SECURE_NO_WARNINGS // no error warnings

#define NUMS 4

#include <stdio.h> // library in use

int main(void) {

	printf("---=== IPC Temperature Analyzer ===---");

	//creating variables high_value, low_value, average temperature, day, high_day, low_day
	int high_value;
	int low_value;
	float average_temperature;
	int day;
	int high_day;
	int low_day;
	//craeting variables total_high and total_low, highest_temp, lowest_temp and initialising them to 0
	float total_high = 0;
	int highest_temp = 0;
	int lowest_temp = 0;
	float total_low = 0;

	// Taking input from user for three days 

	for (day = 1;day <= NUMS; day++) {
		printf("\nEnter the high value for day %d: ", day);
		scanf("%d", &high_value);
		printf("\nEnter the low value for day %d: ", day);
		scanf("%d", &low_value);
		
		// inserting check to make sure user follows the guidelines and enters right input

		while (high_value < low_value || high_value > 40 || low_value < -40)
		{
			printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
			printf("\nEnter the high value for day %d: ", day);
			scanf("%d", &high_value);
			printf("\nEnter the low value for day %d: ", day);
			scanf("%d", &low_value);
	
		}
		// adding up user's input and storing it in the correct total variable
		total_high += high_value;
		total_low += low_value;
		
		// checking highest and lowest temperatures and the days that they occur
		if (high_value > highest_temp)
		{
			highest_temp = high_value;
			high_day = day;
		}
		if (low_value < lowest_temp)
		{
			lowest_temp = low_value;
			low_day = day;
		}
	}
	// calculating the average of temperatures entered and printing it out to screen
	average_temperature = (total_high + total_low) / 8;
	printf("\nThe average (mean) temperature was: %.2f\n", average_temperature);
	// prints out the highest and lowest temperatures and the days on which they occur.
	printf("The highest temperature was %d, on day %d\n", highest_temp, high_day);
	printf("The lowest temperature was %d, on day %d\n", lowest_temp, low_day);

	return 0; // end of program
}
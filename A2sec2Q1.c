//(A2.sec2.Q1):Write a program to display number of days in the given month and year using switch case statement.


#include <stdio.h>

int main()
{
	int month, year, days;

	printf("Enter month (1-12):");
	scanf("%d", &month);
	printf("Enter year:");
	scanf("%d", &year);


	switch(month)
	{
		case 1: 
		case 3: 
		case 5: 
		case 7: 
		case 8: 
		case 10: 
		case 12: 
			days = 31;
			break;
		case 4: 
		case 6: 
		case 9: 
		case 11: 
			days = 30;
			break;
		case 2: 

			if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
				days = 29;
			else
				days = 28;
			break;
		default:
			printf("you entered a wrong month.\n");
			return -1;
	}


	printf("Number of days in %d/%d: %d\n", month, year, days);

	return 0;
}



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int menuMain();
char userIn[2];
bool running = true;

int menuMain()
{
	printf("-----------------------------\n");
	printf("  GROUP 1 INVENTORY SYSTEM\n");
	printf("-----------------------------\n");
	printf("MAIN MENU\n");
	printf("[A] Add Inventory Item\n");
	printf("[B] Update Inventory Item\n");
	printf("[C] View Inventory List\n");
	printf("[X] Exit System\n\n");
	printf("Please Enter your desired function:");

	do
	{
		scanf_s(" %c", &userIn[0], 1);
		switch (userIn[0])
		{
			case 'a':
			case 'A':
				printf("Adding Inventory Item\n");
				break;

			case 'b':
			case 'B':
				printf("Updating Inventory Item\n");
				break;
		
			case 'c':
			case 'C':
				printf("Viewing Inventory List\n");
				break;
				

			case 'x':
			case 'X':
				printf("Thank you for using the G1 Inventory System!\n");
				break;

			default:
				printf("Invalid Input, please try again.\n");
				scanf("%*[^\n]%*1[\n]");
				continue;
		}
		break;//exits the do while loop when a valid input is selected.
	} while (running == true); //To keep entering an input until it is valid

		return 0;


		
}
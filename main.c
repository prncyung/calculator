#include <stdio.h> // Help in allowing input and output header file
/*
 * Passing values of the operator not
 * having a specific characters
*/

int main()
{
	int choice; // Holds the user choice of the operation
	double num1, num2;    // Holds your input values
	
	printf("Simple Calculator\n");
	printf("_________________________________ \n");

	//Infinite loop asking for input.
	while(1) {
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplcation\n");
		printf("4. Division\n");
		printf("5. Quit\n");

		// Accept user input
		printf("Enter your choice: ");
		scanf("%d", &choice);

		// Check what value was passed by the user
		if (choice == 5) {
			printf("Goodbye!\n");
			break; // Exit the loop (Out of the program)
		}
	}
}

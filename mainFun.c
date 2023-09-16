#include <stdio.h> // Help in allowing input and output header file
/*
 * Passing values of the operator not
 * having a specific characters
*/

// function definitions
double add(double a, double b) {
	return a + b;
}
double subtraction (double a, double b) {
	return a - b;
}
double multiplication (double a, double b) {
	return a * b;
}
double division (double a, double b) {
	if(b != 0) {
		return a / b;
	} else {
		printf("Error: Division by zero \n");
		return 0;
	}
}

// Main function
int main()
{
	int choice; // Holds the user choice of the operation
	double num1, num2, result;    // Holds your input values
	
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

		printf("Enter two numbers: ");
		scanf("%lf %lf", &num1, &num2); // long float to accept two num

		// Check the value it matches
		switch (choice) {
			case 1:
				result = add(num1, num2);
				break;
			case 2:
				result = subtraction(num1, num2);
                                break;
			case 3: 
				result = multiplication(num1, num2);
                                break;
			case 4:
				if (num2 != 0) {
					result = division(num1, num2);
                                } else {
					printf("Error: Division by zero \n");
				}
				break;
			default:
				printf("Invalid choice! Please try again. \n");
				continue; // This will skip the calculation for an invalid value.
		
		}
		printf("Results: %.2lf\n", result);
	}

	return 0;
}


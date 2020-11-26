#include <stdio.h>
#include <conio.h>
int main()
{
	float num1, num2, result;
	char op, choice;
	
	printf("\n             Welcome to C calculator \n\n");

	printf("Enter first Number : ");
	scanf("%f", &num1);

	printf("Enter the Operator : ");
	scanf(" %c", &op);

	printf("Enter Second Number : ");
	scanf("%f", &num2);

	printf("\n");

	switch (op)
	{
		case '+':
			result = num1 + num2;
			printf("RESULT =  %.2f\n", result);
			break;

		case '-':
			result = num1 - num2;
			printf(" RESULT = %.2f\n", result);
			break;

		case '*':
			result = num1 * num2;
			printf("RESULT =  %.2f\n", result);
			break;

		case '/':
			result = num1 / num2;
			printf(" RESULT =  %.2f\n", result);
			break;

		default:
			printf(" The Operator is not valid");
	}
	printf("\nDo you want to continue ? y for YES or n for NO\n");
	scanf(" %c",&choice);
	if(choice == 'y' || choice == 'Y')
	{
		// main();
		switch (op)
		{
			case '+':
				result = num1 + num2;
				printf("RESULT =  %.2f\n", result);
				break;

			case '-':
				result = num1 - num2;
				printf(" RESULT = %.2f\n", result);
				break;

			case '*':
				result = num1 * num2;
				printf("RESULT =  %.2f\n", result);
				break;

			case '/':
				result = num1 / num2;
				printf(" RESULT =  %.2f\n", result);
				break;

			default:
				printf(" The Operator is not valid");
		}
	}
	else {
		printf("Thank You ! \n");
	}
	
}

#include<stdio.h>

int main()
{
	float weight, height, BMI;
	printf("Enter weight in kilograms :");
	scanf("%f",&weight);
	printf("Enter height in meters:");
	scanf("%f",&height);
	
	BMI =  weight / (height * height);
	
	
	printf("\n\n Body Mass Index ( BMI ) = %.2f",BMI);
	
	if(BMI >= 25.0)
	{
		printf("\n\n Status  : Overweight\n");
	}
	else if(BMI >= 18.5)
	{
		printf("\n\n Status  : Normal\n");
	}
	else
	{
		printf("\n\n Status  : Underweight\n");
	}
	
	return 0;
}

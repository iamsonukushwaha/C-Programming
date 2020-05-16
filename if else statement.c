#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	if(n < 10)
	{
		printf("\n Entered number is LESS than 10 \n");	
	}
	else
	{
		printf("\n Entered number is GREATER than 10 \n");	
	}
	getch();
}

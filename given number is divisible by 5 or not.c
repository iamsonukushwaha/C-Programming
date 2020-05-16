#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n % 5 == 0 )
	{
		printf("Given number %d is divisible by 5",n);
	}
	else
	{
		printf("Given number %d is NOT divisible by 5",n);
	}
	
	return 0;
}

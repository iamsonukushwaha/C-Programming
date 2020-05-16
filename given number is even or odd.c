#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	if(n % 2 == 0 )
	{
		printf("Given number %d is even",n);
	}
	else
	{
		printf("Given number %d is odd",n);
	}
	
	return 0;
}

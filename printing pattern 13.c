#include<stdio.h>
#include<conio.h>
int main()
{
	int n, i, j, k, c = 120;
	printf("Enter number of rows(upto 60) you want to print  :");
	scanf("%d", &n);
	printf("\n\n");
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=c/2-i; j++)
		{
			printf(" ");
		}
		for(k=1; k<=2*i-1; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}

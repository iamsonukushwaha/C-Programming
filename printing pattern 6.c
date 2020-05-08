#include<stdio.h>
#include<conio.h>
main()
{
	int i, j;
	for(i=0; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("\t %d",j);
		}
		printf("\n");
	}
	getch();
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int i, j;
	int table ;
	int max ;
	printf(" \t \t \t TABLE  \n");
	printf("\n \n");
	printf("ENTER NUMBER UPTO WHICH YOU WANT TO WRITE TABLE : ");
	scanf("%d",&table);
	printf("ENTER MAXIMUM RANGE OF TABLE : ");
	scanf("%d",&max);
	
	for(i = 1; i <= table; i++)
	{
	  for(j = 1; j<=max; j++)
	  {
	  	printf("%d * %d = %d \n", i,j,i*j);
	  }	
	  printf(" \n");
	} 
	getch();
}

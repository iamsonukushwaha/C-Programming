#include<stdio.h>
#include<conio.h>

int main()
{
	int a, b;
	printf("\n Enter a number to find it's cube : ");
	scanf("%d", &a);
	b = a * a * a;
	printf("\n Cube of %d is %d \n ",a,b);
	getch();
}

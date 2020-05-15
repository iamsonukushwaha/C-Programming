#include<stdio.h>
#include<conio.h>
int main()
{
	int r;
	float area;
	printf(" \n Enter radius of the circle :");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("\n\n  AREA OF THIS CIRCLE = %.2f \n",area);
	getch();
}

/* swapping of two numbers*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b ,temp;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	printf("\nElements before swapping\n");
	printf("a = %d b = %d",a,b);
	temp = a;
	a = b ;
	b = temp ;
	printf("\n\nElements after swapping\n");
	printf("a = %d b = %d",a,b);

	getch();
	
	
}


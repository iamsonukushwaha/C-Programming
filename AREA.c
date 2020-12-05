#include <stdio.h>
#include <math.h>

int main()
{
	int r,h ;
	float l,pi = 3.14;
	float aoc,coc,lsaoc,voloc,csaoc;
	
	printf(" Enter radius in centimeter :");
	scanf("%d",&r);
	printf(" Enter height in centimeter :");
	scanf("%d",&h);
	
	printf("\n\n");

	aoc = pi*r*r;
	coc = 2*pi*r;
	lsaoc = 2*pi*r*h;
	voloc = pi*r*r*h;
	l= sqrt(r*r + h*h);
	csaoc = pi * r * l;
	
	printf("Area of circle = %.2f ",aoc);
	printf("\n\n");
	printf("Circumference of circle = %.2f ",coc);
	printf("\n\n");
	printf("Lateral surface area  of cylinder = %.2f ",lsaoc);
	printf("\n\n");
	printf("Volume  of cylinder = %.2f ",voloc);
	printf("\n\n");
	printf("Curved surface area  of cone = %.2f ",csaoc);
	printf("\n\n");
	
	return 0;
	
}

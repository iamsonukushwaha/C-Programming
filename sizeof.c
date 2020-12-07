#include<stdio.h>

int main()
{
	int a;
	char b;
	int arr[10];
	// printf("\n size of int =\t\t %d byte(s) \n", sizeof(int));
	printf("\n size of int =\t\t %d byte(s) \n", sizeof(a));
	// printf("\n size of char =\t\t %d byte(s) \n", sizeof(char));
	printf("\n size of char =\t\t %d byte(s) \n", sizeof(b));
	printf("\n size of float =\t %d byte(s) \n", sizeof(float));
	printf("\n size of short =\t %d byte(s) \n", sizeof(short));
	printf("\n size of double =\t %d byte(s) \n", sizeof(double));
	printf("\n size of array =\t %d byte(s) \n", sizeof(arr));
	printf("\n size of long =\t\t %d byte(s) \n", sizeof(long));
	printf("\n size of long double =\t %d byte(s) \n", sizeof(long double));
	printf("\n\n");

	return 0;
}

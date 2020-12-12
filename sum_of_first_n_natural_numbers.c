#include <stdio.h>

int main()
{
	int i, rows, sum=0;
    printf("Enter the number upto which to sum up : ");
	scanf("%d", &rows);

	for(i=1; i<=rows; i++)
	{
        sum += i;
	}
    printf("%d",sum);

	return 0;
}
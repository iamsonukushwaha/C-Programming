#include<stdio.h>

int main()
{
    int n, a, max, min;
    printf("Enter min amd max range of numbers : ");
    scanf("%d %d",&min, &max);

    for(n=min;n<=max;n++)
    {
        for(a=2;a<n;a++)
        {
            if(n%a == 0)
            {
                break;
            }
        }

        if(a == n)
        {
            printf("Prime Number %d\n",n);
        }

    }

    return 0;
    
}
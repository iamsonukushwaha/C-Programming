#include<stdio.h>

int main()
{
	int i, j, n, top, least, a, max, min, arr[1000];
    printf("Enter number of elements in the Array :");
    scanf("%d",&n);
    if(n != 0)
    {
        printf("Enter %d element(s) of the Array : ",n);

        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }

        printf("Entered %d element(s) of the array are : ",n);
        for(i=0;i<n;i++)
        {
            printf("%d  ",arr[i]);
        }

        min = max = arr[0];
        for(i=0;i<n;i++)
        {
            if(min > arr[i])
            {
                min = arr[i];
            }
            if(max < arr[i])
            {
                max = arr[i];
            }
        }
        printf("\n\n");
        printf("Smallest number of the array is : %d \n",min);
        printf("Largest number of the array is : %d \n",max);
        

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i] > arr[j])
                {
                    a = arr[i];
                    arr[i] = arr[j];
                    arr[j] = a;
                }
            }
        }

        printf("\nAscending Order : ");
        for(i=0;i<n;i++)
        {
            printf("%d  ",arr[i]);
        }

        printf("\nDecending order : ");
        for(i=n-1;i>=0;i--)
        {
            printf("%d  ",arr[i]);
        }

        printf("\n\n");

        printf("Show Least what numbers : ");
        scanf("%d",&top);
        if(top > n)
        {
            printf("Invalid Range");
        }
        else
        {
            
            printf("Least %d numbers are : ",top);
            for(i=0;i<top;i++)
            {
                printf("%d  ",arr[i]);
            }
        }
        

        printf("\n\n");

        printf("Show Top what numbers : ");
        scanf("%d",&least);
        if(least > n)
        {
            printf("Invalid Range");
        }
        else
        {
            printf("Top %d numbers are : ",least);
            for(i=least-1;i>=0;i--)
            {
                printf("%d  ",arr[i]);
            }
        }  
           
    }
    else
    {
        printf("Zero not allowed");
    }
    
	return 0;

}
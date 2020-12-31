#include<stdio.h>

int main()
{
	int i, j, n, top, least, temp, max, min, arr[1000];
    printf("Enter number of elements in the Array :");
    scanf("%d",&n);
    if(n != 0)
    {
        printf("Enter %d element(s) of the Array : ",n);
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }
        printf("Entered %d element(s) of the array are : ",n);
        for(i=0;i<n;i++) {
            printf("%d  ",arr[i]);
        }

        min = arr[0];
        max = arr[0];
        for(i=1;i<n;i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        printf("\n\nSmallest number of the array is : %d \n",min);
        printf("\n\nGreatest number of the array is : %d \n",max);
        
        for(i=0;i<n;i++) {
            for(j=i+1;j<n;j++) {
                if(arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("\nAscending Order : ");
        for(i=0;i<n;i++) {
            printf("%d  ",arr[i]);
        }

        printf("\nDecending order : ");
        for(i=n-1;i>=0;i--) {
            printf("%d  ",arr[i]);
        }

        printf("\n\nShow Least what numbers : ");
        scanf("%d",&least);
        if(least > n) {
            printf("Invalid Range");
        } else {
            printf("Least %d numbers are : ",least);
            for(i=0;i<least;i++) {
                printf("%d  ",arr[i]);
            }
        }

        printf("\n\nShow Top what numbers : ");
        scanf("%d",&top);
        if(top > n) {
            printf("Invalid Range");
        } else {
            printf("Top %d numbers are : ",top);
            for(i=n-1;i>=n-top;i--) {
                printf("%d  ",arr[i]);
            }
        }  
    } else {
        printf("Zero not allowed");
    }

	return 0;
}

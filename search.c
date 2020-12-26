// Program to search element and its position in the array

#include<stdio.h>

int main() {
    int i, n, count=0, s, arr[1000];
    printf("Enter number of elements in the Array :");
    scanf("%d",&n);
    
    if(n != 0) {
        printf("Enter %d element(s) of the Array : ",n);
        for(i=0;i<n;i++) {
            scanf("%d",&arr[i]);
        }

        printf("Entered %d element(s) of the array are : ",n);
        for(i=0;i<n;i++) {
            printf("%d  ",arr[i]);
        }

        printf("\n\nEnter element which you want to search in the array : ");
        scanf("%d",&s);

        for(i=0;i<n;i++) {
            if(arr[i] == s) {
                count++;
            }
        }
        if(count == 0) {
            printf("Element %d Not found \n",s);
        } else {
            printf("Element %d found in the array %d time(s) ",s,count);
            printf("At Position(s) : ");
            for(i=0;i<n;i++) {
                if(arr[i] == s) {
                    printf("%d ",i+1);
                }
            }
        }
    } else {
        printf("Zero not allowed");
    }

	return 0;
}
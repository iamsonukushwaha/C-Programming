
#include <stdio.h>

int main() {
    int n;
    printf("enter n :");
    scanf("%d",&n);
    for (int row = 1; row <= n; row++) 
    {
        for (int col = 1; col <= 2*n-1; col++) 
        {
            if(col>=n-(row-1)&&col<=n+(row-1)){
                if(row>=1&&col>n-(row-1)&&col<n+(row-1)){
                    printf("2");
                }
                else{
                    printf("1");
                }
                
            } else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}

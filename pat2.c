

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    
    for(int i=1; i<=n; i++)
    {
        printf("%d\t", i*i + 1);
    }
    
    return 0;
}

#include <stdio.h>
int main() {
    char c,i;
    printf("Enter u to display uppercase alphabets.\n");
    printf("Enter l to display lowercase alphabets. \n");
    scanf("%c", &c);
    if (c == 'U' || c == 'u') {
        for (i = 'A'; i <= 'Z'; i++)
            printf("%c ", i);
    } else if (c == 'L' || c == 'l') {
        for (i = 'a'; i <= 'z'; i++)
            printf("%c ", i);
    } else {
        printf("Error! You entered an invalid character.");
    }
    
    return 0;
}

#include<stdio.h>

int main()

/* 

48 - 57  >  to write 0 to 9

65 - 90 > to write A to Z

97 - 122 > to write a to z

 */


{
    int i ;
    
    for (i = 0; i < 256; i++)
    {
        printf("%d : %c \n",i, i);
    }

    printf("\n\n");
    
   printf ( "ASCII value of 0-9 is %d - %d\n", '0', '9');

    for (i = 48; i <= 57; i++)
    {
        printf("%d : %c \n",i, i);
    }


    printf("\n\n");
    printf ( "ASCII value of A-Z is %d - %d\n", 'A', 'Z');

    for (i = 65; i <= 90; i++)
    {
        printf("%d : %c \n",i, i);
    }

    printf("\n\n");
    printf ( "ASCII value of a-z is %d - %d\n", 'a', 'z');


    for (i = 97; i <= 122; i++)
    {
        printf("%d : %c \n",i, i);
    }

    return 0;
}
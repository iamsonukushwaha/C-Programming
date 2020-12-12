#include<stdio.h>
#include<stdio.h>

void main()
{
    while(kbhit() == 0)
    {
        printf("press any key to stop this loop ........\n");
    }

}
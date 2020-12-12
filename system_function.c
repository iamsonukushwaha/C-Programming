#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	if(system(NULL)  != 0)
    {
        // system("dir");
        // system("shutdown");
        system("help");

        // you can put any command between the double quotes which are used in command prompt
        
    }
    else 
    {
        puts("Command processor is not present in your OS");
    }

    return 0;

}

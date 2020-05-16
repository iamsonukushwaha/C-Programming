#include<stdio.h>
#include<conio.h>
int  main()
{
	int  a, b, c;
	printf("\npress  1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n 5 for remainder\n");
	
	scanf("%d",&c);
	switch(c)
    {
        case 1:
            printf("\n enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("\n %d + %d = %d",a,b,a + b);
            break;
    
        case 2:
            printf("\n enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("\n %d - %d = %d",a,b,a - b);
            break;
    
        case 3:
            printf("\n enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("\n %d * %d = %d",a,b,a * b);
            break;
    
        case 4:
            printf("\n enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("\n %d / %d = %d",a,b,a / b);
            break;
    
        case 5:
            printf("\n enter two numbers :");
            scanf("%d%d",&a,&b);
            printf("\n %d %% %d = %d",a,b,a % b);
            break;
        default:
            printf("\nInvalid choice");

    }

}
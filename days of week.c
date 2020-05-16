#include<stdio.h>
#include<conio.h>

int main()
{
	int weekdays ;
	printf("Enter Days number in range of 1 to 7 : ");
	scanf("%d",&weekdays);
	
	switch(weekdays)
	{
		case 1 :
			{
				printf("\n MONDAY");
				break ;
			}
			
			case 2 :
			{
				printf("\n TUESDAY");
				break ;
			}
			
			case 3 :
			{
				printf("\n WEDNESDAY");
				break ;
			}
			
			case 4 :
			{
				printf("\n THRUSDAY");
				break ;
			}
			
			case 5 :
			{
				printf("\n FRIDAY");
				break ;
			}
			
			case 6 :
			{
				printf("\n SATURDAY");
				break ;
			}
			
			case 7 :
			{
				printf("\n SUNDAY");
				break ;
			}
			default :
				{
					printf("\n Invalid Number");
				}
	}
	
	getch();
}

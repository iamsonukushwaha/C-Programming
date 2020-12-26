#include<stdio.h>

struct students
{
    int roll;
    int marks;
    char name[40];
    char course[35];

};

int main()
{
    struct students s[100];
    int i, n;

    printf("Enter number of students : ");
    scanf("%d",&n);
    
    printf("\n ::: Enter Details of %d students ::: \n\n",n);
    for(i=1; i<=n; i++)
    {
        printf("Enter Roll, Name, Course, Marks of Student %d \n",i);
        scanf("%d%s%s%d",&s[i].roll,&s[i].name,&s[i].course,&s[i].marks);
    }

    printf("\n\n ::: Details of all %d students ::: \n\n ",n);
    for(i=1; i<=n; i++)
    {
        
        printf("\n Roll : %d\n Name : %s\n Course : %s\n Marks : %d\n\n",s[i].roll,s[i].name,s[i].course,s[i].marks);
    }

    return 0;
}

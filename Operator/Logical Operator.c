#include<stdio.h>

void main()
{
    int age;
    printf("Enter The Age\n : ");
    scanf("%d",&age);
    if(age>=18 && age<=70)
    {
        printf("You Can Drive\n");
    }
    else
    {
        printf("You Can Not Drive\n");
    }
    return 0;
}

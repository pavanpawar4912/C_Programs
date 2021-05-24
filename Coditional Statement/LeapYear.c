#include<stdio.h>

void main()
{
    int year;
    printf("Enter The Year You Want To Check\n");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("The %d Is Leap Year\n",year);
    }
    else
    {
        printf("\n The %d Is Not Leap Year",year);
    }
    return 0;
}

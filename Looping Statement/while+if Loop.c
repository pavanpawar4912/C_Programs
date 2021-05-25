#include<stdio.h>

void main()
{
    int i;
    printf("Enter The Value Of i\n");
    scanf("%d",&i);
    while(i<=20)
    {
        if(i>=10)
        {
            printf("The Value Of i is %d\n",i);
            i++;
        }

    }
    return 0;
}

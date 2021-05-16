#include<stdio.h>
void main()
{

    int num1,num2;
    printf("\n Enter The Number First:\n ");
    scanf("%d",&num1);
    printf("\n Enter The Number Second:\n");
    scanf("%d",&num2);
    if(num1%num2)
    {
     printf("\n The Number Is Divisor");
    }
    else
        {
         printf("\n The Number Is Not Divisor");
        }

    return 0;
}

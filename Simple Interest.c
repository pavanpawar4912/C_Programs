#include<stdio.h>
void main()
{
    int principal,rate,years;
    printf("\n Enter The Principal : ");
    scanf("%d",&principal);
    printf("\n Enter The Rate ");
    scanf("%d",&rate);
    printf("\n Enter The Years ");
    scanf("%d",&years);
    int simpleinterest = (principal*rate*years)/100;
    printf("The Value Of Simple Interest %d"   ,simpleinterest);
    return 0;
}

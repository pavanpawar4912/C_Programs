#include<stdio.h>
void main()
{
    int n,i,Range;
    printf("Enter The Number\n");
    scanf("%d",&n);
    printf("Enter The Range\n");
    scanf("%d",&Range);
    for(i=1; i<=Range; i++)
    {
        printf("%d*%d =%d\n",n,i,n*i);
    }
    return 0;

}

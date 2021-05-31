#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter The Number\n");
    scanf("%d",&n);
    for(i=n ; i ; i--)
    {
        printf("%d*%d= %d\n",n,i,n*i);
    }
    return 0;
}

#include<stdio.h>
int sum(int a,int b);
int main()
{
    int a,b;
    printf("Enter The Value Of a\n");
    scanf("%d",&a);
    printf("Enter The Value Of b\n");
    scanf("%d",&b);
    printf("The Addition Of a, b is %d \n,",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
int result;
result = a+b;
return result;
}


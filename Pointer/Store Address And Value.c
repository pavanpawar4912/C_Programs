#include<stdio.h>
int main()
{
    int a =6;
    int *ptr;
    ptr = &a;
    printf("The Address of  a is %u\n",&a);
    printf("The Value Of  a is %d\n",*ptr);
    return 0;
}

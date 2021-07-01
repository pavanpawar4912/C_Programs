#include<stdio.h>
int main()
{
    int i =34;
    int *j =&i;//J will store The Address of i
    printf("The Value Of i is %d\n",i);
    printf("The Value Of j is %d\n",*j);
    printf("The Address of i is %u\n",&i);
    printf("The Address Of *j is %u\n",j);
    return 0;
}

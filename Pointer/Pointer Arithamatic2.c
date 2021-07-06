#include<stdio.h>
int main()
{
    char i=31;
    int ptr = &i;
    printf("The Value Of ptr is %u\n",ptr);
    ptr++;
     printf("The Value Of ptr is %u\n",ptr);
     return 0;

}

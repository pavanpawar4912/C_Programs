#include<stdio.h>

void main()
{
    // a - z = 97-122
    char ch;
    printf(" Enter The  Single Character \n");
    scanf("%c",&ch);
    if(ch<=122 && ch>=97)
    {
        printf("\n %c is lower case character",ch);
    }
    else if(ch>=65 && ch<=90)
    {
        printf("\n %c is upper case character",ch);
    }
    else
    {
        printf("\n You Entered Invalid Character");
    }
    return 0;
}

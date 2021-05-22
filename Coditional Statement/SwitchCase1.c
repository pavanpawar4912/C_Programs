#include<stdio.h>
void main()
{
    char ch;

    printf("\n Enter Single Character : ");
    scanf("%c",&ch);
    switch(ch)
    {

    case 'A':
    case 'a': printf("\n Welcome : ");
    break;

    case 'B':
    case 'b': printf("\n Have Good Day :");
    break;

    case 'C':
    case 'c':printf("\n Have Nice Day : ");
    break;

    case 'D':
    case 'd':printf("\n Good Bye: ");
    break;

    default:
        printf("\n You Entered Invalid Character :");
        break;
    }
    return 0;
}


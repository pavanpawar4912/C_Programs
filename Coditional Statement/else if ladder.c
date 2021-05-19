#include<stdio.h>
void main()
{
    int per;
    printf("Enter The Number You Want TO Check : \n");
    scanf("%d",&per);
    if(per>=75)
    {
        printf("You Have Distinction\n");
    }
     else if(per>=60 && per<75)
    {
        printf("You Have Class A \n");
    }
     else if(per>=35 && per<60)
    {
        printf("You Have Class B\n");
    }
     else if(per<35)
    {
        printf("You Are Fail\n");
    }
    else
    {
        printf("You Have Entered Invalid Number\n");
    }
    return 0;

}

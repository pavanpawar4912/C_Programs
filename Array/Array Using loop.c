#include<stdio.h>
int main()
{
    int marks[5];
    for(int i =0; i<5; i++)
    {
        printf("Enter The Value Of Marks For Student %d :\n",i+1);
        scanf("%d",&marks[i]);
    }
    for(int i =0; i<5; i++)
    {
        printf("The Value Of Marks For Student :%d \n",marks[i]);
    }
    return 0;
}

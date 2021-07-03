#include<stdio.h>
int main()
{
    int marks[4];
    printf("Enter The Marks Student 1\n");
    scanf("%d",&marks[0]);
     printf("Enter The Marks Student 2\n");
    scanf("%d",&marks[1]);
     printf("Enter The Marks Student 3\n");
    scanf("%d",&marks[2]);
     printf("Enter The Marks Student 4\n");
    scanf("%d",&marks[3]);
    printf("You Have Entered %d %d %d and %d\n",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}

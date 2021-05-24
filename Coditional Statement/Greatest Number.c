#include<stdio.h>
void main()
{
    int n1,n2,n3,n4;
    printf("Enter The 4 Number You ");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    if(n1==n2 && n2==n3 && n4==n1)
    {
        printf("All Number Are Same\n");
    }
    else if(n1>n2 && n1>n3 && n1>n4)
    {
        printf("%d is greater\n",n1);
    }
    else
    {
        if(n2>n1 && n2>n3 && n2>n4)
        {
            printf("%d is greater\n",n2);
        }
        else if(n3>n1 && n3>n2 && n3>n4)
        {
            printf("%d is greater\n",n3);
        }
        else
        {
            printf("%d is greater\n",n4);
        }
    }

    getch();
    return 0;
}

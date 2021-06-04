#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("Enter The Number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            printf("This Is Not Prime Number");
            flag =1;
            break;

        }
    }

        if(flag==0){
            printf("The Given Number Is prime Number");
        }



    return 0;
}

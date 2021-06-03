#include<Stdio.h>
void main()
{
    int i =0,n,factorial = 1;
    printf("Enter The value Of n\n");
    scanf("%d",&n);
    for(i =1;i<=n;i++)
    {
        factorial *=i;
    }
    printf("The Value of %d is %d",n,factorial);
    return 0;

}

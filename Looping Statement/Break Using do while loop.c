#include<stdio.h>
void main()
{
    int i;
    do{
        printf("The Value Of I Is %d\n",i);
        if(i==4)
        {
            break;
        }
        i++;
    }
    while(i<10);
    return 0;
}

#include<stdio.h>

void printArray(int *ptr,int n)
{
    for(int i=0; i<n; i++)
    {
        printf("The Value Of Element %d is %d\n",i+1,*(ptr+i));
    }
}
int main()
{
    int arr[] = {1,25,65,45,78,45,98};
    printArray(arr,7);
    return 0;
}

//Create an Array of 10 numbers   verify using pointer arithmetic that  (ptr+2) points to the third  element where ptr is pointer
//pointing to the first number of array.

#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];
    ptr =ptr+2;
    if(ptr==&arr[2])
    {
        printf("these point to the same location\n ");

    }
    else
    {
        printf("these do not show the same location\n");
    }
}

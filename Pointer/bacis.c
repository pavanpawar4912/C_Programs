//Write a program  having a variable i print the address of i.
//Pass the variable to a function  and print its address .


#include<stdio.h>
 int practice(int i);
 void main()
 {
     int i = 7;
     printf("The value of i is %d\n",i);
     practice(i);
     printf("The Address  of i is %u\n",&i);
     return 0;
 }
 int practice(int i)
 {
     printf("The Address Of i is %u\n",&i);
 }

#include<stdio.h>
float average(int a,int b,int c);
 void main()
 {
     int a,b,c;
     printf("Enter The Value Of a,b,c\n");
     scanf("%d%d%d",&a,&b,&c);
     printf("The Average Is %f",average(a,b,c));
     return 0;
 }
 float average( int a, int b, int c)
 {
     float result;
     result = (a+b+c)/3;
     return result;
 }

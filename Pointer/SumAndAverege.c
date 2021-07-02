//write a program using a function which calculate  the sum and average of two numbers.
//use the pointer and print the value of sum and average in main()

#include<stdio.h>
void sumAndAverage(int a, int b,int *sum,float *avg)
{
     *sum = a+b;
     *avg =(float)*sum/2;
}
int main()
{
    int i,j,sum;
    float avg;
    i =3;
    j =6;
    sumAndAverage(i,j,&sum,&avg);
    printf(" value of sum is %d\n",sum);
    printf(" value of avg %f\n",sum);
    return 0;

}

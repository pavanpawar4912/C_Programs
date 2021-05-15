#include<stdio.h>
void main()
{
    float celsius;
    printf("\n Enter The Temperature into Celsius");
    scanf("%f",&celsius);
     float far = (celsius*9/5)+32;
    printf("Temperature into Fahrenheit is %f",far);
    return 0;

}

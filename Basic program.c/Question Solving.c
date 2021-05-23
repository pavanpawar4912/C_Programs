/*Write a program to find out whether a student pass or fail.If it required total 40% and
 At Lest 33% in Each subject to pass Assume 3 Subjects and take marks as o input from the user.*/


#include<stdio.h>

void main()
{
    int Physics,Chemistry,Maths;
    float  total;

    printf("Enter The Marks of physics \n");
    scanf("%d",&Physics);

    printf("Enter The Marks of Chemistry \n");
    scanf("%d",&Chemistry);

    printf("Enter The Marks of Maths \n");
    scanf("%d",&Maths);

    total = (Physics + Chemistry + Maths)/3;

    if((total<40)||(Physics<33) ||(Chemistry<33)||(Maths<33))
    {
        printf("Your Total Percentage is %f and Your Are Fail",total);
    }
    else
    {
        printf("Your Total Percetage is %f and Your Are Pass",total);
    }
    return 0;
    getch();

}

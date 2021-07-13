// write a program of an array of 10 numbers and store multiplication take bye 5 in it

int  main()
{
    int mul[10];
    for( int i=0;i<10;i++)
    {
        mul[i]= 5*(i+1);
    }
     for( int i=0;i<10;i++)
     {
         printf("5x%d =%d\n",i+1,mul[i]);

     }
     return 0;
}

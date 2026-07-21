/*
    START
        Accept number as NO
        if No is completely divisibale by 2 
            then print Even
        otherwise
            print Odd
    STOP


    START
        Accept number as NO
        Divide No by 2
        it remainder is 0
            then print as Even 
        otherwise
            print os Odd
    STOP

*/

#include<stdio.h>

int main ()
{
    int iValue = 0;
    int iRemainder =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
     
    iRemainder = iValue % 2;

    if(iRemainder ==0)

    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n") ;
    }

    return 0;
}
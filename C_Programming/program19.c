//write a program which accept number from user and return the count of number b/w 3 and 7

#include <stdio.h>
 
int CountNum(int iNo)
{
    int iDigit =0;
    int iCnt = 0;

    while(iNo !=0)
    {
        iDigit =iNo % 10;

        if((iDigit > 3) && (iDigit <7))
        {
            iCnt ++;
        }
        iNo =iNo /10;
    }
    return iCnt;
}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet =CountNum(iValue);

    printf("Number is : %d",iRet);

    return 0;
}
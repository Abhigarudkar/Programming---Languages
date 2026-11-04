
//write a program which accept number from user and return the multiplication of all digits

#include<stdio.h>
int MultDigit(int iNo)
{
    int iMult =1;
    int iDigit =0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;

         iMult= iMult * iDigit;

         iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    iRet =MultDigit(iValue);

    printf("Number is : %d",iRet);

    return 0;
}
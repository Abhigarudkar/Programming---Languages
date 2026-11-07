// Input : 5
// Output :1 3 5 7

#include<stdio.h>

void Display(int iNo)
{
    int iCnt =0;

    for(iCnt =1;iCnt <  iNo ;iCnt +=1)
    {
        printf("%d  ",iCnt);
    }
  

}

int main()
{
    int iValue =0;

    printf("Enter the Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}
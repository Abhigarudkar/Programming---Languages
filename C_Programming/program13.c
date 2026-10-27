


/* write a program which accept width & heigth of ractangle from user and calculate its area (Area = width * Height)

ALGORITHM

START
   
STOP
*/

#include<stdio.h>

double WidthHeigth(float fWidth , float fHeigth)
{
    
    double dArea =0.0;

    dArea= fWidth * fHeigth;

    return dArea;
}

int main ()
{
    float fValue1=0.0;
    float fValue2=0.0;

    double dRet=0.0;

    printf("Enter Width\n");
    scanf("%f",&fValue1);

    printf("Enter heigth\n");
    scanf("%f",&fValue2);

    dRet=WidthHeigth(fValue1,fValue2);

    printf("the values is :%f",dRet);


    return 0;
}
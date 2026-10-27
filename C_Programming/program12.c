


/* write a program which accept radius of circle from user and calculate its area consider value of PI as 3.14 (Area =PI * Radius)
INPUT : 5
OuTPUT : 8     (4 * 2 )

ALGORITHM

START
   
STOP
*/

#include<stdio.h>

double CricleArea(float fRadius)
{
    double dArea=0.0;
    double PI = 3.14;

    dArea= PI * fRadius * fRadius;

    return dArea;

}
int main ()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet= CricleArea(fValue);

    printf("Cricle Area is : %lf",dRet);

    return 0;

}
    


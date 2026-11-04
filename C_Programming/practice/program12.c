<<<<<<< HEAD



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
    

=======
#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRemainder =0;

    iRemainder = iNo % 2;

    if(iRemainder ==0)
    
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n") ;
    }
}

int main ()
{
    int iValue = 0;
  

    printf("Enter Number :\n");
    scanf("%d",&iValue);
     
    CheckEvenOdd(iValue);
   

    return 0;
}
>>>>>>> ed1bf031270983ccc0a857a539c79f56d46b7094

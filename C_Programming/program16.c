
// Write a program which accept area in square feet and convert in into square meter (1 squarenfeet =  0.0929 Square meter)


#include<stdio.h>

double FeetMeter(float fSquare)
{
    double dMeter =0.0;
    dMeter=(fSquare * 0.0929);

    return dMeter;
}
int main ()
{
    float fValue =0.0;
    double dRet=0.0;

    printf("Enter square \n");
    scanf("%f",&fValue);

    dRet=FeetMeter(fValue);

    printf("square feet to square meter %f",dRet);

    return 0 ;

}
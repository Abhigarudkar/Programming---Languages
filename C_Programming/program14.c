

/*write a program which accept distance in kilometer and convert it into meter . (1 kilometer = 1000 meter)
Input = 5
Output = 5000
*/

#include <stdio.h>
int KMtoMeter(int iNo)
{
    //int icnt= 0;
    int iDis=0;
    iDis=iNo * 1000;

    return iDis;

}
int main ()
{
    int iValue =0;
    int iRet = 0 ;

    printf("Enter distance\n");
    scanf("%d",&iValue);

    iRet=KMtoMeter(iValue);

    printf("distance is : %d",iRet);

    return 0 ;
}

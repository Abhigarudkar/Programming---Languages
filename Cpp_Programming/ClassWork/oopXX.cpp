#include<iostream>
using namespace std;

class Arithematic

{
    public:
        int iNo1;
        int iNo2;
        

         Arithematic()  //defu
        {
            iNo1 = 0;
            iNo2 = 0;

        }

         Arithematic(int A,int B)  //para
        {
            iNo1 =A;
            iNo2 =B;
        }

        int Addition()
        {
            int iAns =0;
            iAns = iNo1+iNo2;
            return iAns ;
        }
        int substraction()
        {
            int iAns =0;
            iAns = iNo1-iNo2;
            return iAns ;
        }

};

 int main()
{
    Arithematic aobj1(11,10);
    Arithematic aobj2(21,20);

    int iRet = 0;

    iRet = aobj1.Addition ();
    cout<<"Addition is : "<<iRet<<"\n";
   
    iRet = aobj1.substraction ();
    cout<<"substraction is : "<<iRet<<"\n";


    iRet = aobj2.Addition ();
    cout<<"Addition is : "<<iRet<<"\n";
   
    iRet = aobj2.substraction ();
    cout<<"substraction is : "<<iRet<<"\n";

    return 0;
}
#include <iostream>

using namespace std ;
#pragma pack(1)
class Base
{
    public :
    int i,j ;
    int Addition(int a , int b)
    {
        return a + b ;
    }
    virtual int substraction (int a , int b) = 0;
    


};
#pragma pack (1)
class Derived :public Base 
{
    int x;
    
        int substraction (int a , int b)
        {
            return a - b;

        }
        
         int multiplication (int a , int b)
        {
            return a * b;

        }
    
};

int main()
{  


    Base *bp = new Derived();

    int iRet = 0 ;

    iRet = bp ->Addition(10,11);
    cout <<iRet<<"\n";
    
     iRet = bp ->substraction(10,11);
     cout<<iRet<<"\n";

     // iRet = bp ->multiplication (10,11);      //error

    
    return 0;  
}
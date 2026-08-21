#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
  public:
        int *Arr;
       int iSize;
       // Defult constructor
       ArrayX()
       {

       }

       //parametrised constructors
       ArrayX(int X)
       {

       }

};

int main ()
{
  ArrayX aobj1();
  ArrayX aobj2(5);  

  cout<<sizeof(aobj1)<<endl;    //16


  return 0;
}
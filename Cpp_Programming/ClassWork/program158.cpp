#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
  public:
         int *Arr;
         int iSize;
          

        //parametrised constructors
        ArrayX(int X)
         {
          cout<<"inside constructor\n"
            iSize =X;               // charecteristics initaliasation
            Arr = new int[iSize];  //resource  alloction
         }


         ~ArrayX()
         {
          cout<<"inside destructor\n"
          delete []Arr;
         }
};

int main ()
{
  ArrayX aobj1(5);
 
  return 0;
}
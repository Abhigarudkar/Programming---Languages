#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
  private:
         int *Arr;
         int iSize;
          

        ArrayX(int X)
         {
            iSize =X;               
            Arr = new int[iSize];    
         }


         ~ArrayX()
         {
    
          delete []Arr;
         }
};

int main ()
{
  ArrayX *aobj1= new ArrayX(5);
  cout<<aobj1 ->

  // logic (function call)
  
  
  delete aobj1;

  return 0;
}
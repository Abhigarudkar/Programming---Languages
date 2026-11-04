#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{
  private:
         int *Arr;
         int iSize;
          
public :
       //prametrised constructor with defult argument
         ArrayX(int X = 5)
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
  ArrayX *aobj1= new ArrayX();       //prametrised constructor
   ArrayX *aobj2= new ArrayX(15);     //prametrised constructor
 

  //(function call)
  
  
  delete aobj1,aobj2;

  return 0;
}
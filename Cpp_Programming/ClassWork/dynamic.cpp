#include<iostream>
using namespace std;

int main()
{
    int length = 0;
    int *Arr = NULL;

    cout<<"Enter the number of element :\n";
    cin >>length;

    //step 1 : Allocate the memory
    Arr = new int [length];
    if (Arr ==NULL)
    {
        cout <<"unable to allocate memory\n";

    }
    else
    {
        cout <<"memory get sucssfully allocated";
    }

    //step 2: use the memory 
    // step 3 : 

    delete []Arr;

    return 0;
}
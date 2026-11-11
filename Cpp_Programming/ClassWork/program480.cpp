#include<iostream>
using namespace std;

template <class X>

X Maximum (X No1,X No2,X No3)
{
    X Ans;
    if((No1>No2)  && (No1 > No3))
    {
        return No1;
    }
    else if((No2 >No1)||(No2 > No3))
    {
        return No2;
    }
    else{
        return No3;
    }
}

int main ()
{
    cout<<Maximum(13.2f,15.6f,20.1f)<<"\n";
    cout<<Maximum(13.2,15.6,20.1)<<"\n";
    cout<<Maximum(13,15,64)<<"\n";


    return 0;
}
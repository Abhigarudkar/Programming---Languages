#include<iostream>
using namespace std;

template <class X>

X Maximum (X No1,X No2)
{
    X Ans;
    if(No1>No2)
    {
        Ans= No1;
    }
    else
    {
        Ans= No2;
    }
    return Ans;
}

int main ()
{
    cout<<Maximum(13.2f,15.6f)<<"\n";
    cout<<Maximum(13.2,15.6)<<"\n";
    cout<<Maximum(13,15)<<"\n";


    return 0;
}
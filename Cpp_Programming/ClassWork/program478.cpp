#include<iostream>
using namespace std;

template <class T>

T Maximum (T No1,T No2)
{
    T Ans;
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
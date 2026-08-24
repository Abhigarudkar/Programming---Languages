#include <iostream>
using namespace std;

class Demo
{
    public:
        int i ;
        int j;
        static int x ;

            Demo()
            {
                this -> i = 0;
                this -> j = 0;

            }

            Demo (int a,int b)
            {
                this -> i =a;
                this -> j =b;
            }

            void fun()
            {
                cout<<"Inside fun\n";
                cout<<"value of i is :"<<this ->i<<"\n";
                cout<<"value of j is :"<<this ->j<<"\n";
                cout<<"value of x is :"<<x<<"\n";
            }
            static void Gun()
            {
                
                cout<<"Inside Gun\n";
              //  cout<<i<<"\n";    NA
              //  cout<<j<<"\n";    NA
                cout<<x<<"\n";
                
            }


};

int Demo :: x =11;

int main()
{
    Demo ::Gun();
    cout<<"value of x is :"<<Demo ::x<<"\n";
    

    Demo obj(10,20);

    obj.fun();

    obj.Gun();     // Demo::Gun();

    cout<<"size of obj is :<<"<<sizeof(obj)<<"\n";


    return 0;
}
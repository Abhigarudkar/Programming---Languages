#include<iostream>
using namespace std ;

class Base
{
    public :
        int i,j;
        
        void fun()
        {
            cout<<"Inside Base fun \n";
        }
        
        void gun()
        {
            cout<<"Inside Base gun \n";
        }
        void sun()
        {
            cout<<"Inside Base sun \n";
        }
        
        void bun()
        {
            cout<<"Inside Base bun \n";
        }


};

class Derived : public Base
{
    public :
        int x ;

        void gun ()
        {
            cout <<"inside Derived gun \n";
        }
        void sun ()
        {
            cout <<"inside Derived sun \n";
        }
         void mun ()
        {
            cout <<"inside Derived mun \n";
        }
        
         void run ()
        {
            cout <<"inside Derived run \n";
        }

};

int main ()
{
    Base *bp = new Derived ();

    bp->fun ();       //Base fun
    bp->gun ();        //base gun
    bp->sun ();          // base sun
    //   bp->run ();         //error
    //  bp->mun ();        //error
    bp->bun ();        // base bun

    return 0 ;
}
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
    Base *bp = new Derived ();        //nocasting
    Derived *dp1 = new Derived();      //  nocasting
    Base *bp2 = new Derived();         //upcasting
    Derived *dp2 = new Base ();        //downcastig

    return 0 ;
}














































int main()
{  
    cout<< sizeof

    Base *bp = new Derived();

  /* bp ->fun();         //Base fun
    bp ->gun();         //Base gun
    bp ->sun();         // Base sun
    bp ->run();         // error
    bp ->mun();         // error
    bp ->bun();        // Base bun
    */
    return 0;  
}
interface A
{
    int no = 11;
    void fun ();
    
    private void Display ()
    {
        System.out.println("inside private Display");
    }
    default void gun ()
    {                                                    // 8+ version in  java
        
        System.err.println("inside gun");
        Display ();
    }
   
}


class Demo implements A
 {
    public void fun ()
    {
        System.out.println("inside fun");
    }
    
    
}

class InterfaceDemo9
{
    public static void main (String A[])

    {
        Demo dobj = new Demo ();
        dobj.fun();
        dobj.gun();
        //dobj.Display();              //error
        
    
    }

}
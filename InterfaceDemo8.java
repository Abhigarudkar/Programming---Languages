interface A
{
    int no = 11;
    void fun ();
    default void gun ()
    {                                                    // 8+ version in  java
        
        System.err.println("inside gun");
    }
}


class Demo implements A
 {
    public void fun ()
    {
        System.out.println("inside fun");
    }
    
    
}

class InterfaceDemo8
{
    public static void main (String A[])

    {
        Demo dobj = new Demo ();
        dobj.fun();
        dobj.gun();
        
    
    }

}
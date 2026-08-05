

interface Demo
 {
    int no = 11;
    void Display ();

    
}
 class Hello implements Demo 


{
    public void Display()
    {
        System.out.println("indise Dispaly");
    }
}


class InterfaceDemo3
{
    public static void main (String A[])

    {
        System.out.println(Demo.no);
        //  Demo.no =12;    //not is final

      Hello hobj = new Hello() ;  
      
      hobj.Display();
    }

}
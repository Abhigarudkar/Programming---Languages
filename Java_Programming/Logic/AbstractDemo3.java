
abstract class Base
{
    public int i,j ;
    public int Addition (int a ,int b)
    {
        return a + b ;
    }
    abstract public int Subtraction (int a ,int b);


}

class derived extends Base    // error
{
    public Subtraction (int a, int b)
    {
        return a-b ;

    }
    public Multiplication (int a ,int b )
    {
        return a * b ;
    }
}

class AbstractDemo3
{
    public static  void main (String A[])
    {
       Base bp = new Derived ();     // error
       int iRet = 0 ; 

       iRet = bp.Subtraction(11,10);
       System.out.println<<iRet<<"\n";
       iRet = bp.Subtraction(11,10);
       System.out.println<<iRet<<"\n";

       //iRet = bp.Multiplication(11,10);
    }
} 
       

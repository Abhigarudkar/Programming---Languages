

import java.util.*;
class ExceptionDemo5
{
    public static void main (String A[])
    {
        Scanner sobj = new Scanner(System .in);

        int iNo1 =0 , iNo2 =0 ;
        int iAns =0;

        System.out.println("Enter the first number");
        iNo1= sobj.nextInt();

        System.out.println("Enter the second number");
        iNo2= sobj.nextInt();

        try 
        {
            System.out.println("inside try block");
            iAns = iNo1 / iNo2; 
        }   
        catch(ArithmeticException aobj)          // specific cath
        {
           System.out.println("inside catch block"); 
           System.out.println(aobj);
        }
        catch (Exception eobj)                      //Generic catch
        {
            System.out.println("inside Generic catch");
        }
        System.out.println("Division is : "+iAns);

    }
}
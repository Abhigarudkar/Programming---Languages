<<<<<<< HEAD
// Type 2

import java.util.Scanner;

class program42

{
     public static void CheckDivisible(int iNo)  
    {
        if( (iNo %3==0) && (iNo % 5==0) )
        {
            System.out.println("Number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 & 5");
        }

    }
    public static void main (String A[])
    {
        
        Scanner sobj = new Scanner(System.in);

        int iValue =0;

        System.out.println("Enter Number :");
        iValue =sobj.nextInt();

        CheckDivisible(iValue);    
        
    }
}
=======
// Type 2

import java.util.Scanner;

class program42

{
     public static void CheckDivisible(int iNo)  
    {
        if( (iNo %3==0) && (iNo % 5==0) )
        {
            System.out.println("Number is divisible by 3 & 5");
        }
        else
        {
            System.out.println("Number is not divisible by 3 & 5");
        }

    }
    public static void main (String A[])
    {
        
        Scanner sobj = new Scanner(System.in);

        int iValue =0;

        System.out.println("Enter Number :");
        iValue =sobj.nextInt();

        CheckDivisible(iValue);    
        
    }
}
>>>>>>> ed1bf031270983ccc0a857a539c79f56d46b7094

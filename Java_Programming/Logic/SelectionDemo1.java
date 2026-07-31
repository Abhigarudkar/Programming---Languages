import java.util.Scanner;


public class SelectionDemo1 
{
    public static void main(String Arr[])
    {
    Scanner sobj = new Scanner (System.in);
    int iNo1 = 0;

    System.out.println(" Enter your age");
    iNo1 = sobj.nextInt();

    
    if (iNo1 >=18)
    {
        System.out.println("you can vote");
    }
    else
    {
        System.out.println("you cant vote");
    }

    }

}

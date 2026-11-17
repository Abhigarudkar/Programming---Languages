//input : my name is amit
//output : My Name Is Amit

//input : my NAME is Amit
//output : My Name Is Amit

import java.util.*;// camal case


class program740
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str= str.trim();

        str=str.replaceAll("\\s+"," ");

        str=str.toLowerCase();
        System.out.println(str);

        
    }
}

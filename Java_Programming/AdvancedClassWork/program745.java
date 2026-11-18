//Input : my name is amit
//output : ym eman si tima 
import java.util.*;


class program744
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

         str =str.trim();

        str = str.replaceAll("\\s+"," ");

        String Tokes[]= str.split(" "); 

       StringBuffer sb = null;

       for(int i =0 ;i < Tokes.length;i++)
       {
            sb= new StringBuffer(Tokes[i]);

            System.out.println((sb.reverse()));
       }
       




        
    }
}

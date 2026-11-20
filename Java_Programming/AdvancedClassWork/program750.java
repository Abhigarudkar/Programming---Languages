//Input : india is my country i live in india
//output : bharat is my country i live in bharat
import java.util.*;


class program750
{
    public static void main(String[] args) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str =str.trim();

        str = str.replaceAll("\\s+"," ");

        String Tokes[]= str.split(" "); 

        int iCount=0;
        for(int i =0 ; i < Tokes.length; i++)
        {
            if(Tokes[i].equals(("india")))
            {
                iCount++;
            }
        }
        
        System.out.println("Frequency of eord is :"+iCount);
    }
}

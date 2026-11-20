//Input : my name is amit school name is abhinav city name is pune
//output : 3
import java.util.*;


class program746
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
            if(Tokes[i].equals(("name")))
            {
                iCount++;
            }
        }
        
        System.out.println("Frequency of eord is :"+iCount);
    }
}

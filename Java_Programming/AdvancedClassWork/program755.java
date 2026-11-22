//Input : india is my country i live in india
//output : bharat is my country i live in bharat
import java.util.*;


class program755
{
    public static void main(String[] args) 
    {
        int i =0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str =str.trim();

        str = str.replaceAll("\\s+"," ");

        str=str.toLowerCase();


        char Arr[] = str.toCharArray();

        int Frequency  []= new int [26];

      
            
            //a  b  c  d
            //97 98 99 100
            //0  1   2   3


            for(i =0 ;i< Arr.length;i++)
            {
                if(Arr[i] >='a' && Arr[ i]<='z')
                {
                    Frequency [(int)Arr[i] - 97]++;
                }

            }
            

            int iMax =0;
            char ch = '\0';
            for(i=0 ;i <Frequency.length; i++)
            {
                if(Frequency[i] > iMax)
                {
                    iMax= Frequency[i];
                    ch = (char)(i + 97);

                    System.out.println((char)(i + 97)+" : "+Frequency[i]);
                    
                }
                
            }
            System.out.println("Maximum occures charcter is : "+ch+"with  Frequency "+iMax);
            
                    
    }
}

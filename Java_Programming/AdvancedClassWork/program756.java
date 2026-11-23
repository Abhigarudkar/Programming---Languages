
import java.util.*;


class program756
{
    public boolean CheckAnagram(String str1, String str2)
    {

        return true;

    }
    public static void main(String[] args) 
    {
        int i =0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter  first String :");
        String str1 = sobj.nextLine();

        System.out.println("Enter  Second String :");
        String str2 = sobj.nextLine();

        boolean bRet = false;

        bRet =  CheckAnagram(str1,str2);

        if(bRet == true)
        {
            System.out.println("String are anagram");
        }
        else
        {
            System.out.println("String are not anagram");
        }


            
                    
    }
}

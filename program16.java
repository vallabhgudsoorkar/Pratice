import java.lang.*;
import java.util.*;
class StringDemo
{
    int CapCount(String str)
    {
        int iCnt = 0;
        char arr[] = str.toCharArray();
       
        for(int i = 0;i<arr.length;i++)
        {
            if(arr[i]>='A' && arr[i]<='Z')
            {
                iCnt++;
            }
           
            
        }
        return iCnt;
    
    }
}

class program16
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        StringDemo sdobj = new  StringDemo();
        System.out.println("Entre the String ");
        String str = sobj.nextLine();
      
        int iRet = 0;

        iRet = sdobj.CapCount(str);

        System.out.println("Number of Capital Letters are"+iRet);

   
      
    }
}

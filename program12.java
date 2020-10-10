import java.lang.*;
import java.util.*;
class Digit
{
    int  Display(int arr[],int no)
    {
        int iNo = 0;
        for(int i = 0;i<arr.length;i++)
        {
            if(arr[i]==no)
            {
                 iNo = i;
                 break;
            
            }
            else
            {
                iNo = 0;
            }
            
        }
        
        return iNo;
    
    }
}

class program12
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Digit dobj = new  Digit();

        System.out.println("Entre the lenghth of Array");
        int value = sobj.nextInt();

        int arr[] = new int [value];

        for(int i=0 ;i<arr.length;i++)
        {
            arr[i] = sobj.nextInt();
        }

        System.out.println("Entre the Number to be checked");
        int no = sobj.nextInt();
        int  iRet = 0;
           iRet =  dobj.Display(arr,no);
        System.out.println("Element Fiund at Index "+iRet);
      
    }
}

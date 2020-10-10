import java.lang.*;
import java.util.*;
class Digit
{
    boolean Display(int arr[],int no)
    {
        int iNo = 0;
        for(int i = 0;i<arr.length;i++)
        {
            if(arr[i]==no)
            {
                 iNo = arr[i];
                break;
            }
            
        }
        if(iNo==no)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class program11
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
        boolean iRet = false;
           iRet =  dobj.Display(arr,no);
        if(iRet ==true)
        {
                  System.out.println("Element is Present");
        }
        else
        {
            System.out.println("Element is not Present");
        }

      
    }
}

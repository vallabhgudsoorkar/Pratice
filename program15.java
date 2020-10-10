import java.lang.*;
import java.util.*;
class Digit
{
    int Display(int arr[])
    {
        int iMult = 1;
        System.out.println("Elements Within Range are");
        for(int i = 0;i<arr.length;i++)
        {
            if(arr[i]%2 !=0)
            {
                iMult = iMult * arr[i];
            }
           
            
        }
        return iMult;
    
    }
}

class program15
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

       

        int iRet = 0;
         iRet = dobj.Display(arr);
        System.out.println("Product of odd Elements is "+iRet);
      
    }
}

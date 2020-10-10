import java.lang.*;
import java.util.*;
class Digit
{
    void Display(int arr[],int no1,int no2)
    {
        int iNo = 0;
        System.out.println("Elements Within Range are");
        for(int i = 0;i<arr.length;i++)
        {
            if(arr[i]>=no1 && arr[i]<=no2)
            {
                 System.out.print(arr[i]+"\t");
                
            
            }
           
            
        }
        
    
    }
}

class program14
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

        System.out.println("Entre the starting Number");
        int no1 = sobj.nextInt();

        System.out.println("Entre Ending Number");
        int no2 = sobj.nextInt();

    
         dobj.Display(arr,no1,no2);
        
      
    }
}

import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(int arr[] ,int arr1[])
    {
       System.out.println("Contents of First array is :");
        for(int i=0;i<arr.length;i++)
        {
            if(arr[i]%2!=0)
            {System.out.print(arr[i]+"\t");}
        }
        System.out.println("\nContents of Second array is :");
         for(int i=0;i<arr1.length;i++)
        {
            if(arr1[i]%2!=0)
            {System.out.print(arr1[i]+"\t");}
        }
    }   
    
}

class program68
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();

        System.out.println("Entre the size of First array");
        int m = sobj.nextInt();
         int arr[] = new int [m];

         for(int i = 0;i<arr.length;i++)
         {
             arr[i] = sobj.nextInt();
         }   

         System.out.println("Entre the size of Second  array");
        int n = sobj.nextInt();
       int arr1[] = new int [n];
       
         for(int i = 0;i<arr1.length;i++)
         {
             arr1[i] = sobj.nextInt();
         }   
    

      
          dobj.Display(arr,arr1);

       
        
    }
}

import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(int arr[] ,int arr1[])
    {
      
       System.out.println("Contents of First array is :");
       int iSum = 0;
       for(int i=0;i<arr.length;i++)
       {
           iSum = iSum + arr[i];
           
       }
        
       
       for(int k=0;k<arr1.length;k++)
       {
           iSum = iSum - arr1[k];
           
       }
         System.out.println("Difference of summition  of  Both  array is :"+iSum);
      

    }   
    
}

class program71
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

import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(int arr[] ,int arr1[])
    {
        int arr2[] = new int [arr.length + arr1.length];
       System.out.println("Contents of First array is :");
       int j =0;
       for(int i=0;i<arr.length;i++)
       {
           arr2[j] = arr[i];
           j++;
       }
       for(int k=0;k<arr1.length;k++)
       {
           arr2[j] = arr1[k];
           j++;
       }
       for(int i = 0 ;i<arr2.length;i++)
       {
           System.out.print(arr2[i]+"\t");
       }

    }   
    
}

class program69
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

import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(int arr[] ,int arr1[])
    {
      
       System.out.println("Contents of First array is :");
       int iSum = 0;
       for(int i=1;i<arr.length-1;i++)
       {
           iSum = arr[i];
           if(arr[i+1]<iSum)
           {
                iSum = arr[i+1];
           }
           
       }
        System.out.println("Minimum Element of  array is :"+iSum);
          iSum = 0;
       for(int i=1;i<arr1.length-1;i++)
       {
           iSum = arr1[i];
           if(arr1[i+1]<iSum)
           {
                iSum = arr1[i+1];
           }
           
       }
       System.out.println("Minimum Element of  array is :"+iSum);
       

    }   
    
}

class program72
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

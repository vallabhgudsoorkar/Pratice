import java.lang.*;
import java.util.*;
class Demo
{
   
  
    int AddDiagonal(int arr[][])
    {
        int max = 0;
        int k = 0;
            for(int i =0 ;i<arr.length;i++)
            {
                k = arr[i];
                max = max + k;
                System.out.print("Addition of Diagonal is "+ max);
                max = 0;
            }   
        
    }
   
    
}

class program44
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("Entre Row ");
        int row = sobj.nextInt();

        System.out.println("Entre Column");
        int col = sobj.nextInt();

        int arr[][] = new int [row][col];
        for(int i = 0;i<arr.length;i++)
        {
            for(int j=0;j<arr[i].length;j++)
            {
                arr[i][j]=sobj.nextInt();
            }
        }

       
    

      
       int ret =  dobj.AddDiagonal(arr);

       System.out.println(ret);
        
    }
}

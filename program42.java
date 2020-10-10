import java.lang.*;
import java.util.*;
class Demo
{
   
  
    int AddDiagonal(int arr[][],int no)
    {
        int iSum = 0;
            for(int i =0 ;i<arr.length;i++)
            {
                for(int j=0;j<arr[i].length;j++)
                {
                    if(arr[i][j]==no)
                    {
                        iSum++;
                    }
                }
            }   
         return iSum;
    }
   
    
}

class program42
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

       
        System.out.println("Entre Number");
        int no = sobj.nextInt();

      
       int ret =  dobj.AddDiagonal(arr,no);

       System.out.println(ret);
        
    }
}

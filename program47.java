import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void AddDiagonal(int arr[][],int row,int col)
    {
       
        int temp1 = 0;
        int temp[][] = new int [row][col];
            for(int i =0 ;i<arr.length;i++)
            {
              
                
                  for(int j=0;j<arr[i].length;j++)
                    {
                        if(j<arr[i].length-1)
                        {
                          temp[i][j] = arr[i][arr[i].length-1];
                          temp[i][j+1] = arr[i][j];
                        }
                    }  
                       
                        
                        
                    
                    
                   

                }
                
               
              
             for(int i =0 ;i<temp.length;i++)
            {
                
                for(int j=0;j<temp[i].length;j++)
                {
                  
                  System.out.println("Elements are :"+i+j+" : "+temp[i][j]);

                }
                
               
            } 
        
    }
   
    
}

class program47
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
            System.out.println("Row with index : "+i);
            for(int j=0;j<arr[i].length;j++)
            {
                System.out.println("Enter the element :"+i+" , "+j);
                arr[i][j]=sobj.nextInt();
            }
        }

       
    

      
          dobj.AddDiagonal(arr,row,col);

       
        
    }
}

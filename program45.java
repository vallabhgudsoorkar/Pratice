import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void AddDiagonal(int arr[][])
    {
        int temp  = 0;
        int temp1 = 0;
            for(int i =0 ;i<arr.length;i++)
            {
              
                
                  for(int j=0;j<arr[i].length;j++)
                    {
                        if(i<arr.length-1)
                       { temp = arr[i][j];
                       
                        arr[i][j] = arr[i+1][j];
                       
                        arr[i+1][j] = temp;
                       }
                    }  
                       
                        
                        
                    
                    
                   

                }
                
               
              
             for(int i =0 ;i<arr.length;i++)
            {
                
                for(int j=0;j<arr[i].length;j++)
                {
                  
                  System.out.println("Elements are :"+i+j+" : "+arr[i][j]);

                }
                
               
            } 
        
    }
   
    
}

class program45
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

       
    

      
          dobj.AddDiagonal(arr);

       
        
    }
}

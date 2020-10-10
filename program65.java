import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(int row ,int col)
    {
      
        for(int i=1;i<=row;i++)
        {
            for(int j =1;j<=col;j++)
            {
                
                if(i==j ||i==row || j==col || i==1 || j==1)
                {
                    System.out.print(j+"\t");
                }
               
                else 
                {
                    System.out.print(" "+"\t");
                }
                
                
               
            }
            System.out.print("\n");
        }
    }   
    
}

class program65
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
     
        System.out.println("Entre the Row ");
        int row = sobj.nextInt();

        
        System.out.println("Entre the Collumn ");
        int col = sobj.nextInt();

       
    

      
          dobj.Display(row ,col);

       
        
    }
}

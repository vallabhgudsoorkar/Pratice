import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(String str)
    {
       char arr[] = str.toCharArray();
        int n = arr.length;

        for(int i=arr.length;i>0;i--)
        {
            for(int j =0;j<arr.length;j++)
            {
                    if(j>=i)
                    {
                        System.out.print("*"+"\t");
                    }
                    else
                    {
                        System.out.print(arr[j]+"\t");
                    }
            }
            System.out.print("\n");
        }
        
    }
   
    
}

class program57
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("ENtre the String");

        String str = sobj.nextLine();
       

       
    

      
          dobj.Display(str);

       
        
    }
}

import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Display(String str)
    {
       char arr[] = str.toCharArray();
        int n = arr.length;

        for(int i=arr.length*2;i>0;i--)
        {
            for(int j =0;j<arr.length;j++)
            {
                    if(j<i/2)
                    {
                        System.out.print(arr[j]+"\t");
                    }
                    else 
                    {
                        System.out.print("*"+"\t");
                    }
            }
            System.out.print("\n");
        }
        
    }
   
    
}

class program59
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

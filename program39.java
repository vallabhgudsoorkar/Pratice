import java.lang.*;
import java.util.*;
class Demo
{
   
  
    void Dislpay(String str)
    {
               
            char arr[] = str.toCharArray();
            int j = arr.length;
            char brr[] = new char [j];
            j--;
            for(int i = 0;i<arr.length;i++)
            {
                brr[j] = arr[i];
                j--;
                
            }

            String dest = new String(brr);

            System.out.println(dest);





    }

    
}

class program39
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("Entre the string  ");
        String str = sobj.nextLine();
       
       
      
         dobj.Dislpay(str);
        
    }
}

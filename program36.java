import java.lang.*;
import java.util.*;
class Demo
{
   
    void Dislpay(String str,String dest,int iCnt)
    {
       char arr[] = dest.toCharArray();
        char iDest[] = new char[iCnt];
        if(iCnt>arr.length)
        {
            String Dest = new String(arr);
           str = str.concat(Dest);
            System.out.println(str);
            
        }
        else if (iCnt<arr.length)
        {
              for(int i = 0;i<iCnt;i++)
            {
                iDest[i]  = arr[i];
            }
            String Dest = new String(iDest);
            str = str.concat(Dest);
             System.out.println(str);
        }

    }
}

class program36
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Demo dobj = new Demo();
        System.out.println("Entre the string  ");
        String str = sobj.nextLine();
        System.out.println("Entre Destination String");
        String dest = sobj.nextLine();

        System.out.println("Entre the Number uptp which you want to copy Second String");
        int iCnt = sobj.nextInt();
        dobj.Dislpay(str,dest,iCnt);
      
    }
}

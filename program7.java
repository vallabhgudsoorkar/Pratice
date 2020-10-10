import java.lang.*;
import java.util.*;
class Digit
{
    public int Display(int No)
    {
        int iDigit = 0;
        int iCnt = 0;
        while(No != 0)
        {
            iDigit = No % 10;
            if(iDigit %2 !=0)
            {
                iCnt++;
            }
            No = No / 10;

        }
        return iCnt;
    }
}

class program7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Digit dobj = new  Digit();

        System.out.println("Entre the lenghth of Array");
        int value = sobj.nextInt();

        
        
          int iRet =  dobj.Display(value);
        System.out.println(iRet);


    }
}

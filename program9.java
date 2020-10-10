import java.lang.*;
import java.util.*;
class Digit
{
    public int Display(int No)
    {
        int iDigit = 0;
        int iMult = 1;
        while(No != 0)
        {
            iDigit = No % 10;
        
        
                iMult = iMult * iDigit;
        
            No = No / 10;

        }
        return iMult;
    }
}

class program9
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

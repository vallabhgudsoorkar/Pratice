/*
program : 10.3
Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter) 
*/

#include<Stdio.h>

int DistanceinMeter(int iNo)
{
    int iMeter = 1000;

    iMeter=iMeter * iNo;

    return iMeter; 



}
int main()
{
        int iValue=0;
        int iRet=0;

    printf("Entre Distance in Kilometer\n");
    scanf("%d",&iValue);

    iRet = DistanceinMeter(iValue);
    printf("%d",iRet);

    return 0;
}




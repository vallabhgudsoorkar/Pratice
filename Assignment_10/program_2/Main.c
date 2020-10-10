/*
program : 10.2
Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)  
*/

#include<Stdio.h>

double AreaOfCircle(float fwidth,float fheight)
{
    
    double Area;

    Area = fwidth * fheight;

    return Area;

}
int main()
{
    float fValue1=0.00;
    float fValue2=0;
    double dRet=0;

    printf("Entre the width and height\n");
    scanf("%f",&fValue1);
    scanf("%f",&fValue2);
    
    dRet=AreaOfCircle(fValue1,fValue2);

    printf("%lf",dRet);

    return 0;
}




/*Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius) 
*/






#include<Stdio.h>

double AreaOfCircle(float fRadius)
{
    float PI=3.14;
    double Area;

    Area = PI * fRadius * fRadius;

    return Area;

}




int main()
{
    float fValue=0.00;
    double dRet=0;

    printf("Entre the radious\n");
    scanf("%f",&fValue);
    
    dRet=AreaOfCircle(fValue);

    printf("%lf",dRet);

    return 0;
}




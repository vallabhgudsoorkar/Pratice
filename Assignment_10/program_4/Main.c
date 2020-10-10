/*
program : 10.4
Write a program which accept temperature in Fahrenheit and convert it into
celsius
*/

#include<Stdio.h>

double DegreeToFaranite(float fNo)
{
    double Celsis = 1;

    Celsis=(fNo-32) * 5/9;

    return Celsis; 



}
int main()
{
        float fValue=0;
        double dRet=0;

    printf("Entre TEMPERATURE \n");
    scanf("%f",&fValue);

    dRet = DegreeToFaranite(fValue);
    printf("%lf",dRet);

    return 0;
}




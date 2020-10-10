/*
program : 10.5
 Write a program which accept area in square feet and convert it into square
meter. (1 square feet = 0.0929 Square meter) 
*/

#include<Stdio.h>

double DegreeToFaranite(float fNo)
{
    double dMeter = 0.0929;

    dMeter= fNo * dMeter;

    return dMeter; 



}
int main()
{
        float fValue=0;
        double dRet=0;

    printf("Entre area in square feet\n");
    scanf("%f",&fValue);

    dRet = DegreeToFaranite(fValue);
    printf("%lf",dRet);

    return 0;
}




#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0;

    printf("Enter the radius: \n", fValue);
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is: %lf\n", dRet);

    return 0;
}
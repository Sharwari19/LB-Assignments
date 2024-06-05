#include<stdio.h>

// 1 Celcius = (Farenheit - 32) * (5/9)


double FhtoCs(float fTemp)
{
    double dTemp = 0.0;
    dTemp = (fTemp - 32) * 5/9;
    return dTemp;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Farenheit\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("The temperature in Celcius is: %lf", dRet);

    return 0;
}
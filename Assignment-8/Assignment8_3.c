#include<stdio.h>
#define CONVERTOR 1000

int KMtoMeter(int iNo)
{
    int iConvertedDistance = 0;
    iConvertedDistance = iNo * CONVERTOR;
    return iConvertedDistance;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in KM: \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meters is: %d\n", iRet);

    return 0;
}
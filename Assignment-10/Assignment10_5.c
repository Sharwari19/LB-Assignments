#include<stdio.h>

int Count(int iNo)
{
    int iCnt = 0, iDigit = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
        {
            iFrequency++;
        }
        iNo = iNo / 10;
    }

    return iFrequency;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("Number of digits less than 6 is: %d\n", iRet);

    return 0;
}
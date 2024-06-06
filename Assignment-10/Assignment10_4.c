#include<stdio.h>

int CountFour(int iNo)
{
    int iCnt = 0, iDigit = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("4 has occurred %d times in the given number\n", iRet);

    return 0;
}
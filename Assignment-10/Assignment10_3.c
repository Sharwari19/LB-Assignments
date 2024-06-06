#include<stdio.h>

int CountTwo(int iNo)
{
    int iCnt = 0, iDigit = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("2 has occurred %d times in the given number\n", iRet);

    return 0;
}
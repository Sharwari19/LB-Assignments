#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
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

    iRet = CountOdd(iValue);

    printf("The count of odd digits is: %d\n", iRet);

    return 0;
}
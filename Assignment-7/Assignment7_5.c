#include<stdio.h>

//Time Complexity : O(N)

int FactorialDifference(int iNo)
{
    int iCnt = 0, iProductE = 1, iProductO = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iProductE = iProductE * iCnt;
        }
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iProductO = iProductO * iCnt;
        }
    }
    return iProductE - iProductO;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = FactorialDifference(iValue);

    printf("Factorial difference of odd factorial and even factorial of the given number is : %d\n", iRet);

    return 0;
}
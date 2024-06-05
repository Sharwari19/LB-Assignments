#include<stdio.h>

//Time Complexity : O(N)

int OddFactorial(int iNo)
{
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 != 0)
        {
            iProduct = iProduct * iCnt;
        }
    }
    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of the given number is : %d\n", iRet);

    return 0;
}
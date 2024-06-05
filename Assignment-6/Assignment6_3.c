#include<stdio.h>

int Factorial(int iNo)
{   
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        iProduct = iProduct * iCnt;
    }
    return iProduct;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of the given number is: %d\n", iRet);

    return 0;
}
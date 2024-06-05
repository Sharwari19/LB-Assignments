#include<stdio.h>

//Time Complexity : O(1)

int DollarToINR(int iNo)
{
    int iConvertor = 70, iConvertedAmount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iConvertedAmount = iNo * iConvertor;

    return iConvertedAmount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter an amount in USD: \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d Rs\n", iRet);

    return 0;
}

int DollarToINR(int iNo)
{
    int iConvertor = 70, iConvertedAmount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iConvertedAmount = iNo * iConvertor;

    return iConvertedAmount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter an amount in USD: \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d Rs\n", iRet);

    return 0;
}
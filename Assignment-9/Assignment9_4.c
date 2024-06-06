#include<stdio.h>

int RangeSum(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    if((iNo1 < 0) || (iNo2 < 0) || (iNo1 > iNo2))
    {
        return -1;
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the starting number: \n");
    scanf("%d", &iValue1);

    printf("Enter the ending number: \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2); 

    if(iRet == -1)
    {
        printf("Invalid Input\n");
    }
    else
    {
        printf("Addition of numbers in this range is: %d\n", iRet);
    }

    return 0;
}

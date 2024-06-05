#include<stdio.h>

//Time Complexity : O(N)

int SumNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = SumNonFact(iValue);

    printf("The sum of all the non factors is: %d\n", iRet);

    return 0;
}
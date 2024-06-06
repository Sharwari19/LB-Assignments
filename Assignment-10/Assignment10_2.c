#include<stdio.h>
#include<stdbool.h>

bool ChkZero(int iNo)
{
    int iCnt = 0, iDigit = 0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            bFlag = true;
        }
        iNo = iNo / 10;
    }
    return bFlag;
}

int main()
{
    int iValue = 0, bRet = false;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == true)
    {
        printf("It contains Zero\n");
    }
    else
    {
        printf("It does not contain Zero\n");
    }

    return 0;
}
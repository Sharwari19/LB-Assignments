#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iFrequency = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountRange(iValue);

    printf("The count of digits between 3 and 7 is: %d\n", iRet);

    return 0;
}
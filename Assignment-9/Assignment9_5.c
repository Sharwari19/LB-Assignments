#include<stdio.h>

void RangeDisplayRev(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    if((iNo1 < 0) || (iNo2 < 0) || (iNo1 > iNo2))
    {
        printf("Invalid Range\n");
        return;
    }

    for(iCnt = iNo2; iCnt >= iNo1; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the starting number: \n");
    scanf("%d", &iValue1);

    printf("Enter the ending number: \n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2); 

    return 0;
}

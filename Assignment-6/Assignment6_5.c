#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        iProduct = iNo * iCnt;
        printf("%d\t", iProduct);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}
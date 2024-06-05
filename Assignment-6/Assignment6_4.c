#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0, iProduct = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return 0;
}
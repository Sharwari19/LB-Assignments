#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
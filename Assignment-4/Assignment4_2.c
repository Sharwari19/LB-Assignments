#include<stdio.h>

//Time Complexity : O(N/2)

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}
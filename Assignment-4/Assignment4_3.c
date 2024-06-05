#include<stdio.h>

//Time Complexity : O(N)

void NonFact(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return 0;
}
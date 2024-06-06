#include<stdio.h>

void RangeDisplay(int iNo1, int iNo2)
{
    int iCnt = 0;

    if(iNo1 > iNo2)
    {
        printf("Invalid Input\n");
        return;
    }

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
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

    RangeDisplay(iValue1, iValue2); 

    return 0;
}
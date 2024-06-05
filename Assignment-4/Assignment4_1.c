#include<stdio.h>

//Time Complexity : O(N/2)

int MultFact(int iNo)
{
    int iCnt = 0;
    int iProduct = 1;

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iProduct = iProduct*iCnt;
        }
    }
    return iProduct;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number: \n");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("The product of this number's factors is : %d\n", iRet);

    return 0;
}
#include<stdio.h>

int DollerToINR(int iNo)
{
    int iCnt = 0;
    int INR =0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        INR = iCnt * 70;
    }

    return INR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a Number of USD :");
    scanf("%d", &iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is : %d", iRet);

    return 0;
}
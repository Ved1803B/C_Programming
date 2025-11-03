#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEven = 1;
    int iOdd = 1;
    int iDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
        else if(iCnt % 2 == 0)
        {
            iOdd = iOdd * iCnt;
        }

        iDiff = iEven - iOdd;

    }

    return iDiff;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is :%d",iRet);

    return 0;

}
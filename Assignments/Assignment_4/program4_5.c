#include<stdio.h>

int Difference(int iNo)
{
    int iCnt = 0;
    int iDiff = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt ++)
    {
         if(iNo % iCnt == 0)
         {
            iSumFact += iCnt;
         }
         else
         {
            iSumNonFact += iCnt;
         }
    }

    return iSumFact - iSumNonFact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = Difference(iValue);

    Difference(iValue);

    printf("%d",iRet);

    return 0;
}
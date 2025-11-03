#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iResult = 0;

    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        return 0;
    }
    else if(iNo1 == 0 && iNo2 == 0)
    {
        return iNo3;
    }
    else if(iNo1 == 0 && iNo3 == 0)
    {
        return iNo2;
    }
    else if(iNo2 == 0 && iNo3 == 0)
    {
        return iNo1;
    }
    else if(iNo1 == 0)
    {
        iNo1 =1;
    }
    else if(iNo2 == 0)
    {
        iNo2 =1;
    }
    else if(iNo3 == 0)
    {
        iNo3 =1;
    }

    iResult = iNo1 * iNo2 * iNo3;

    return iResult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter the three numbers :");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("%d", iRet);

    return 0;

}
#include<stdio.h>
#include<stdbool.h>

bool ChkEvenOdd(int iNo)
{

    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d",& iValue);

    bRet = ChkEvenOdd(iValue);

    if(bRet == true)
    {
     printf("%d is Even number\n",iValue);
    }
    else
    {
     printf("%d is Odd number\n",iValue);
    }

    return 0;
}
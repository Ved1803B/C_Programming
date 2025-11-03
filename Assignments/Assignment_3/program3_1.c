#include<stdio.h>

void printEven(int iNo)
{

    int iCnt = 1;

    if(iNo <= 0)
    {
       return;
    }

    while(iCnt <= iNo)
    {
        printf("%d\t",2 * iCnt);
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    printEven(iValue);

    return 0;
}
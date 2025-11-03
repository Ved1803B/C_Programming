#include<stdio.h>

void ChkNumberType(int num)
{
    if(num > 0)
    {
        printf("%d is a positive number.\n", num);
    }
    else if(num < 0)
    {
        printf("%d is a negative number.\n", num);
    }
    else
    {
        printf("The number is zero.\n");
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    ChkNumberType(number);

    return 0;
}
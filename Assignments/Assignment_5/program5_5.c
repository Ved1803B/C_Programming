#include<stdio.h>

int FindLargest(int x, int y, int z)
{
    if(x > y && x > z)
    {
        return x;
    }
    else if(y > z && y > x)
    {
        return y;
    }
    else if(z > x && z > y)
    {
        return z;
    }
    else
    {
        return x;
    }
}

int main()
{
    int a, b, c, result;

    printf("Enter three Numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    result = FindLargest(a, b, c);

    printf("Largest number is : %d\n", result);

    return 0;
}
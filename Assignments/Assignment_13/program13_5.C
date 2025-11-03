#include <stdio.h>

int sum_even_numbers(int limit)
{
    int i = 0, sum = 0;
    
    
    for(i = 1; i <= limit; i++)
    {
        sum = sum + (2 * i);  
    }

    return sum;
}

int main(void)
{
    int limit;

    printf("Enter number: ");
    scanf("%d", &limit);

    printf("Sum of first %d even numbers is: %d\n", limit, sum_even_numbers(limit));

    return 0;
}
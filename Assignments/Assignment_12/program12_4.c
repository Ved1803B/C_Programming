#include <stdio.h>

int sum_of_even_factors(int number)
{
    int i = 0, sum = 0;

    for(i = 1; i <= number / 2; i++) 
    { 
        if(number % i == 0 && i % 2 == 0)  
        {
            sum = sum + i;
        }
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    printf("Sum of even factors :%d\n", sum_of_even_factors(number));

    return 0;
}
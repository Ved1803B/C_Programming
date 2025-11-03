#include <stdio.h>

void print_factors(int number)
{
    int i;
    printf("Factors of %d are: ", number);

    for(i = 1; i <= number / 2; i++)
    {
        if(number % i == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int number;

    printf("Enter number: ");
    scanf("%d", &number);

    print_factors(number);

    return 0;
}
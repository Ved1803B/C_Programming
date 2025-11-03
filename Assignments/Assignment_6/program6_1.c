#include<stdio.h>

int main()
{
    char name[1000];

    printf("Please enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Your name is: %s\n", name);

    return 0;
}
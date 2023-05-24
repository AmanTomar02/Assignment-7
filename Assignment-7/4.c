// Write a program to calculate HCF of two numbers

#include <stdio.h>

int main()
{
    int a, b, min;
    printf("Enter value a nd b : \n");
    scanf("%d%d", &a, &b);

    for (min = a < b ? a : b; min >= 1; min--)
    {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
    }
    printf("The Hcf is : %d", min);

    return 0;
}
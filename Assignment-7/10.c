// Write a program to print all Armstrong numbers under 1000

#include <stdio.h>

int main()
{
    int n, temp, sum, rem;
    printf("printing all Armstrong number under 1000\n");

    for (n = 1; n <= 1000; n++)
    {
        sum = 0;
        temp = n;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + (rem * rem * rem);
            temp = temp / 10;
        }
        if (n == sum)
        {
            printf("%d is an armstrong number.\n", n);
        }
    }

    return 0;
}
// Write a program to check whether a given number is an Armstrong number or not

#include <stdio.h>

int main()
{
    int n, rem, temp, sum = 0;
    printf("enter the number .\n");
    scanf("%d", &n);

    temp = n; // storing orignal number from n to temp.

    while (n > 0)
    {
        rem = n % 10;
        sum = sum + (rem * rem * rem);
        n = n / 10;
    }
    if (temp == sum)
    {
        printf("%d is an armstrong number .", temp);
    }
    else
    {
        printf("%d is not an armstrong number .", temp);
    }

    return 0;
}

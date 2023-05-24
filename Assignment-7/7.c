// Write a program to print all Prime numbers between two given numbers
#include <stdio.h>

int main()
{
    printf("enter the range for print prime number .\n");
    int a, b, i, j; // a= starting value of range , b= last value of range .
    scanf("%d%d", &a, &b);

    for (j = a; j <= b; j++)
    {
        for (i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
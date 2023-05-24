// Write a program to print first N terms of Fibonacci series

#include <stdio.h>

int main()
{
    int nth; // user input nth term
    printf("enter the value of nth term : ");
    scanf("%d", &nth);

    int a = 0, b = 1, temp = 0, count = 0;

    for (int i = 0; i < nth; i++)
    {

        a = b;
        b = temp;
        temp = a + b;
        printf("The fib value on %d term is %d\n", count, temp);
        count = count + 1;
    }

    return 0;
}
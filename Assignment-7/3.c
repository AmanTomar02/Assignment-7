// Write a program to check whether a given number is there in the Fibonacci series or not

#include <stdio.h>

int main()
{
    int nth; // user input nth term
    printf("enter the value of nth term : ");
    scanf("%d", &nth);

    int value; // value which the user want to check is present or not
    printf("enter the value you want to find in fib series : ");
    scanf("%d", &value);

    int a = 0, b = 1, temp = 0, count = 0;

    for (int i = 0; i < nth; i++)
    {

        a = b;
        b = temp;
        temp = a + b;
        count = count + 1;

        if (value == temp)
        {
            printf("The value %d is present at %d term in the series. ", value, count);
            break;
        }
    }

    return 0;
}
//  Write a program to find the Nth term of the Fibonnaci series

#include <stdio.h>

int main()
{
    int nth; // user input nth term
    printf("enter the value of nth term : ");
    scanf("%d", &nth);

    int a = 0, b = 1, temp = 0; 


    for (int i = 0; i < nth; i++)
    {
        if (nth == 0 && nth == 1)
        {
            printf("The fib value on %d term is %d\n", nth, nth);
        }
        else
        {
            a = b;
            b = temp;
            temp = a + b;
        }
    }
    printf("The fib value on %d term is %d\n", nth, temp);

    return 0;
}
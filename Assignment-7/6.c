// Write a program to print all Prime numbers under 100

#include <stdio.h>

int main()
{
    printf("Here are all prime number under 100\n");
    int l = 0, u = 100, j, i;

    for (i = l + 1; i <= u ; i++) // loop for 1 to 99 count for prime check
    {
        for (j = 2; j < i; j++) // its checking wether its prime or not
        {
            if (i % j == 0)
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

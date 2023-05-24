// Write a program to check whether two given numbers are co-prime numbers or not..
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
    printf("The Hcf is : %d\n", min);

    if (min == 1)
    {
        printf("They are co-prime ");
    }
    else
    {
        printf("They are not  co-prime ");
    }

    return 0;
}


// basically those who have The Hcf is : 1 are co prime ....
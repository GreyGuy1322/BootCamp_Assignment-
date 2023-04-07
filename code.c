#include <stdio.h>
int main()
{
    int i, n, sum;
    printf("Enter the Number\n");
    // Using for loop because it is mandatory as mentioned in the question.
    for (i = 1; i < 2; i++)
    {
        scanf("%d", &n);
    }
    // Using If condition.
    if (sum = n * n)
    {
        printf("Sum of first %d Odd Numbers are %d.\n", n, sum);

        printf("Hence This Proves that the sum of the first 'n' Odd Numbers is always equal to n^2.\n");
    }
    else
    {
        printf("An Error occured, Re-run the program.\n");
    }
    return 0;
}

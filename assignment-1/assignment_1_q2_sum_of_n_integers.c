#include <stdio.h>

int add_numbers_recur(int n)
{
    if (n != 0)
        return n + add_numbers_recur(n - 1);
    else
        return n;
}

int main()
    {

        int n;
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        printf("Sum = %d", add_numbers_recur(n));
        return 0;
    }


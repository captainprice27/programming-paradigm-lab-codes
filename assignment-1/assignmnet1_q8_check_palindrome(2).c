
#include <stdio.h>
#include <string.h>

// n is string length, give index as 0

int check_palindrome_recur(char *s, int n)
{
    static int index = 0;
    if (2 * index > n) // for the middle case , when middle element's index twice > n
        return 1;

    if (s[index] == s[n - 1 - index])
    {
        index = index + 1; // index and (n -1 - index) will be same in palindrome
        return check_palindrome_recur(s, n);
    }
    else
        return 0;
}

void main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';
    // strcspn() calculates the length of the number of characters before the 1st occurrence of character present in both the string.

    printf("Output: %d \n", check_palindrome_recur(str, strlen(str)));
}
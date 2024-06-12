// PROGRAMMING PARADIGM LAB --. assignment -1 , q8
// prayas mazumder 2021csb071


#include <stdio.h>
#include <string.h>

//len is string length, give index as 0
int check_palindrome_recur(char *s, int len, int index)
{  
    if (2 * index > len)
        return 1;

    if (s[index] == s[len - 1 - index])         // index and (len -1 - index) will be same in palindrome
        return check_palindrome_recur(s, len, index + 1);
    else
        return 0;
}

void main()
{
    char str[100];
    printf("Enter the string : ");
    fgets(str, 100, stdin);
    str[strcspn(str,"\n")] = '\0';
    //strcspn() calculates the length of the number of characters before the 1st occurrence of character present in both the string.

    printf("Output: %d \n", check_palindrome_recur(str, strlen(str), 0));
}
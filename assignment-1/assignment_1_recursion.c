

#include <stdio.h>
#include <string.h>

void replaceChar(char *s, int s_length, char c1, char c2)
{
    int i = 0;
    if (s_length= 0)
     return ;

    if (s[i] == c1)
        s[i] = c2;
    i++;
    replaceChar(s, s_length - 1, c1, c2);
}

int main()
{

    char s[100], c1, c2;

    printf("Enter  the string : ");
    gets(s); // gets() is a pre-defined function in C which is used to read a string

    printf("Enter a character replace: ");
    c1 = getchar(); // getchar()take the input of a single character
    getchar();
    printf("\nEnter character to replace  with  %c : ", c1);
    c2 = getchar();
    printf("\n before replace:%s", s);

    replaceChar(s, strlen(s), c1, c2);

    printf("\n String after replace:%s", s);

    return 0;
}
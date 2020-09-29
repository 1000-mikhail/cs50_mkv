#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

string uppercase(string s)
{
    char ch;
    int upper;

    for (int i = 0, n = strlen(s); i < n; i++)
        {
            ch = s[i];
            upper = toupper(ch);
            s[i] = upper;
        }
    return s;
}

int main (void)
{
    string s;
    string upper_s;
    char c, d;

    do
    {
        s = get_string("Please, type names: ");

    }
    while (strlen(s) < 1);

    upper_s = uppercase(s);
    char first = upper_s[0];

    printf("%c", first);

    for (int i = 0, n = strlen(upper_s); i < n; i++)
    {
        c = s[i];
        if (c == ' ')
            {
            printf("%c", s[i+1]);
            }
    }

    printf("\n");

    return 0;
}
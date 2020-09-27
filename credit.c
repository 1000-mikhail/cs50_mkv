#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int func(int a)
{
    int result = 0;
    while(a != 0)
    {
        result += a % 10;
        a = a / 10;
    }
    return result;
}

 void reverse(char s[])
 {
     long i, j;
     char c;

     for (i = 0, j = strlen(s)-1; i<j; i++, j--)
     {
         c = s[i];
         s[i] = s[j];
         s[j] = c;
     }
 }

 void itoa(long n, char s[])
 {
     long i, sign;

     if ((sign = n) < 0)  /* record sign */
         n = -n;          /* make n positive */
     i = 0;
     do {       /* generate digits in reverse order */
         s[i++] = n % 10 + '0';   /* get next digit */
     } while ((n /= 10) > 0);     /* delete it */
     if (sign < 0)
         s[i++] = '-';
     s[i] = '\0';
     reverse(s);
}

int calc(int dlina, char t[])
{
    int summ_last = 0, summ_prelast = 0, j = 0, i = 0, x = 0, result = 0, general_sum = 0;
    char ch;

    for (j = dlina-1; j>=0; j=j-2)
        {
        ch = t[j];
        summ_last += atoi(&ch);
        }
        for (i = dlina-2; i>=0; i=i-2)
            {
            ch = t[i];
            x = atoi(&ch);
            x = x * 2;
            result = func(x);
            summ_prelast += result;
            }
        general_sum = summ_last + summ_prelast;

    return general_sum;
}

int main (void)

{
    long cardnum;
    char p[16];
    int general_sum = 0;

    do
    {
        cardnum = get_long("Input cardnum: ");
    }
    while (cardnum <= 0);

    itoa(cardnum, p);

    int dl = strlen(p);
    //printf("dlina: %d\n", dlina);

    switch(dl)
    {
        case 13:
            {
            if (p[0] == '4')
                {
                general_sum = calc(dl, p);

                if ((general_sum % 10) == 0)
                    {
                      printf("VISA\n");
                    }
                    else
                    {
                      printf("INVALID\n");
                    }
                }
            else
                printf("INVALID\n");
        break;
            }
        case 16:
            {
            if (p[0] == '5' && (p[1] == '1' || p[1] == '2' || p[1] == '3' || p[1] == '4' || p[1] == '5'))
                {
                 general_sum = calc(dl, p);

                if ((general_sum % 10) == 0)
                    {
                      printf("MASTERCARD\n");
                    }
                    else
                    {
                      printf("INVALID\n");
                    }
                }

            else if (p[0] == '4')
                {
                general_sum = calc(dl, p);

                if ((general_sum % 10) == 0)
                    {
                      printf("VISA\n");
                    }
                    else
                    {
                      printf("INVALID\n");
                    }
                }
            else
                {
                printf("INVALID\n");
                }
        break;
            }
        case 15:
            {
            if (p[0] == '3' && (p[1] == '4' || p[1] == '7'))
                {
                    general_sum = calc(dl, p);

                    if ((general_sum % 10) == 0)
                    {
                        printf("AMEX\n");
                    }
                    else
                    {
                        printf("INVALID\n");
                    }
                }
            else
                {
                printf("INVALID\n");
                }
        break;
            }
        default:
         printf("INVALID\n");
    }
return 0;
}
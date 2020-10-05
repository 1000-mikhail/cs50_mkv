#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define SIZE 1000

int fcount_letters (char * string, int len)
{
    int count_letters = 0;

    for (int i = 0; i < len; i++)
    {
        if ((string[i] >= 'A' && string[i] <= 'Z') ||  (string[i] >= 'a' && string[i] <= 'z'))
        {
        count_letters++;
        }
    }
return count_letters;
}

int fcount_sentence (char * string, int len)
{
    int count_sentences = 0;

    for (int i = 0; i < len; i++)
    {
        if (string[i] == '!' ||  string[i] == '?' || string[i] == '.' )
        {
        count_sentences++;
        }
    }
return count_sentences;
}

int fcount_words (char * string, int len)
{
    int count_words = 0;
    int state = 0;

    for (int i = 0; i < len; i++)
    {
        if (string[i] == ' ' ||  string[i] == '\n' || string[i] == '\t' )
                {
                    state = 0;
                }
        else if (state == 0)
                {
                  state = 1;
                  count_words++;
                }
    }
return count_words ;
}

int main(void)
{
    float count_signs = 0;
    float count_sent = 0;
    float count_wrd = 0;
    int index = 0;

    char string[SIZE];

    printf("Text: ");
    //scanf("%[^\n]", string);
    fgets(string, SIZE-1, stdin);

    int dlina = strlen(string);

    count_signs = fcount_letters(string, dlina);
    count_sent = fcount_sentence (string, dlina);
    count_wrd =  fcount_words(string, dlina);

//    printf("count letters: %f\n", count_signs);
//    printf("count sentences: %f\n", count_sent);
//    printf("count words: %f\n", count_wrd);

    float L = (count_signs / count_wrd) * 100;
    float S = (count_sent / count_wrd) * 100;

    //  index = 0.0588 * L - 0.296 * S - 15.8
    index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
        {
            printf("Grade %d\n", index);
        }
//    int c = 0;
//    int i = 0;
//    char s[255];
//
//    printf("Text: ");
//    c = getchar();
//    while (c != '\n')
//            {
//                s[i] = c;
//                i++;
//                c = getchar();
//            }
//
//    int dl = strlen(s);
//    printf("stroka: %s, dl:%d\n", s, dl);

    return 0;
}
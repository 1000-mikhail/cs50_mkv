#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int high = 0, k = 0, p = 0, l = 0;
    int row, j;

// вводим число от 1 до 8
    do
    {
        high = get_int("Enter number from 1 to 8:");
    }
    while (high < 1 || high > 8);

//параметр l для форматирования по левой стороне
    l = high - 1;
//внешний цикл это кол-во строк
    for (row = 0; row < high; row++)
    {
        // печатаем пробелы
        for (p = 0; p < l; p++)
        {
            printf(" ");
        }
        //в той же строке после пробелов печатаем '#''
        for (j = 0; j <= k; j++)
        {
            printf("#");
        }

        //вставка 2-х пробелов
        for (int space = 0; space < 2; space++)
        {
            printf(" ");
        }

        for (j = 0; j <= k; j++)
        {
            printf("#");
        }

        k = k + 1;
        l = l - 1;
        printf("\n");
    }

}

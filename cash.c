#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// есть монеты 1 цент, 5, 10, 25 центов
//найти минимальное кол-во монет всех номиналов для сдачи клиенту

int main(void)
{
    float dollars;
    int one = 1;
    int five = 5;
    int ten = 10;
    int twentyfive = 25;
    int quot; /* частное */
    int rem; /* остаток */
    div_t n, nn, nnn, nnnn;
    int summ;

// вводим число для сдачи монетами
    do
    {
        dollars = get_float("Enter positive number:");
    }
    while (dollars < 0 || dollars == 0);

//переводим доллары в центы (целое число)
int cents = round(dollars * 100);

n = div(cents, twentyfive);

nn = div(n.rem, ten);

nnn = div(nn.rem, five);

nnnn = div(nnn.rem, one);

summ =n.quot + nn.quot + nnn.quot + nnnn.quot;
printf("количество монет: %i\n", summ);

}

// Задача 1. Сколько зерен на доске?

#include<stdio.h>
int grains (int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
        result = result * 2;
    return result;
}

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("Number of grains per cell: %d\n", grains(n));
    return 0;
}

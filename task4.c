// Задача 4. Сумма от 1 до N

#include <stdio.h>

int sumNumber(int n)
{
    int result = 0;
    for (int i = 1; i <= n; i++)
        result = result + i;
        return result;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);
    printf("Amount from 1 to %d: %d\n", n, sumNumber(n));
    
    return 0;
}

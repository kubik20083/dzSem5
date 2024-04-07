// Задача 3. Сумма цифр равна произведению
#include <stdio.h>

int number(int n)
{
    int sum = 0;
    int mult = 1;
    while (n > 0)
    {
        sum = sum + n % 10;
        mult = mult + n % 10;
        n = n / 10;
    }
    return (sum == mult);
}
int main(int argc, char const *argv[])
{
    int n;
    printf("The sum of the digits is equal to the product\n");
    printf("Enter number: \n");
    scanf("%d", &n);
    number(n) ? printf("yes\n") : printf("no\n");
    return 0;
}

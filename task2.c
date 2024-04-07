// Задача 2. НОД

#include <stdio.h>

int gcd(int a, int b)
{
    if(a == 0)
    {
        return b;
    }        
    else if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
    
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter number: \n");
    scanf("%d%d", &a, &b);
    int gcd_result = gcd(a, b);
    printf("The greatest common divisor of %d and %d is %d.\n", a, b, gcd_result);
    
    return 0;
}

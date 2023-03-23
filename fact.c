#include <stdio.h>
int fact(int n)
{
    if (n < 2)
    {
        return n;
    }
    return n * fact(n - 1);
}

int main()
{
    int n, x;
    printf("Enter the no.");
    scanf("%d", &n);
    x = fact(n);
    printf("Factorial of given number is %d", x);
    printf("\n");
    return 0;
}
#include <stdio.h>
// using recurtion
int fib(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}
// using altration
int fibb(int t)
{
    int a = 0, b = 1;
    for (int i = 0; i < t - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int a;
    printf("enter the index to get fibonacci series\n");
    scanf("%d", &a);
    printf("the value of fibonacci number at positon on %d is %d by altrative\n", a, fibb(a));
    printf("the value of fibonacci number at positon on %d is %d by recursive\n", a, fib(a));

    return 0;
}

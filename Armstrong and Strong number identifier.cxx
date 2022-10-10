#include "stdio.h"
#include "math.h"
#include "string.h"
int fac(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
        return a *fac(a - 1);
}
int mul(int a, int n)
{
    return pow(a, n);
}
int main()
{
    char a[100];
    printf("Enter a number:");
    gets(a);
    int arm, str, n;
    arm = str = n = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        arm += mul((int)a[i] - 48, strlen(a));
        str += fac((int)a[i] - 48);
        n += ((int)a[i] - 48) * pow(10, strlen(a) - 1 - i);
    }
    if (n == arm)
        printf("%d is a armstrong number", n);
    if (n== arm && n==str) printf("\n");
    if (n == str)
        printf("%d is a strong number", n);
}
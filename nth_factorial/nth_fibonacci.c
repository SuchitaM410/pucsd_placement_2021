#include<stdio.h>
#include<stdlib.h>

int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1) + fibo(n-2);
}

int even_fibo(int n)
{
    if(n<1)
        return n;
    if(n==1)
        return 2;
    return ((4 * even_fibo(n-1))+even_fibo(n-2));
}

int main()
{
    int n;
    printf("ENter the value of N :");
    scanf("%d",&n);
    printf("%d", fibo(n));
    printf("\n");
    printf("%d",even_fibo(n));
    return 0;
}
#include<stdio.h>
int Fib(int n);
int main()
{
    int n;
    printf("Enter number of terms:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        printf("%d,",Fib(i));
    }
}
int Fib(int n)
{
    if(n==1) return 0;
    else if(n==2) return 1;
    else return(Fib(n-1)+Fib(n-2));
}
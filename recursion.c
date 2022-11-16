#include<stdio.h>
//to find factorial
int factorial(int n);
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
printf("factorial of n is:%ld", factorial(n));
return 0;
}
//recursion
int factorial(int n)
{
    if(n>0)
    {
        return(n*factorial(n-1));
    }
    else 
    return 1;
}
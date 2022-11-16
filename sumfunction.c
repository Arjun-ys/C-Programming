#include <stdio.h>
//sum of 2 numbers
int sum(int a,int b); //function prototype
int main(){
   int a,b;
   printf("Enter a and b:\n");
   scanf("%d\n", &a);
   scanf("%d", &b);
   int s= sum(a,b); // argument/actual parameters
   printf("Sum is:%d",s);
}
int sum(int a,int b) //parameters/formal parameters
{
   return (a+b);
}

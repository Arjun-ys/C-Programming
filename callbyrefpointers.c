#include<stdio.h>
void square(int n);
void _square(int *n); //pointer variable 

int main()
{
    int number=4;
    square(number); //call by value, we're passing value of variable as argument
    printf("Number=%d\n", number);

    _square(&number); //call by reference, we've passed the address of variable as argument
    printf("Number=%d\n", number);
    return 0;
}

void square(int n){
    n= n * n; //n squared
    printf("Square=%d\n", n);
}

void _square(int *n){ //pointer variable, it has recieved the memory address of variable 'number'
    *n= (*n) * (*n); //the value at address is accessed by using * .... changes happening to 'n' here reflect on 'number' too in the main fn beacuse of call by reference
    printf("Square=%d\n", *n);
}
#include<stdio.h>
void main(){
    int no;
    printf("Enter a number: ");
    scanf("%d", &no);
    printf("%d", no % 2 == 0);//returns 1 if the number is divisible by 2, otherwise returns 0
}
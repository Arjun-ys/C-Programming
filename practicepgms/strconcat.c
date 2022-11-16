#include<stdio.h>
#include<string.h>
int main(){
    char st1[50]="Hello ";
    char st2[]="World";
    strcat(st1,st2);
    puts(st1);//"Hello World"
    return 0;
}
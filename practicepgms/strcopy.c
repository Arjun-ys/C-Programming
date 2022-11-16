#include<stdio.h>
#include<string.h>
int main(){
    char st1[]="Hello";
    char st2[]="World";
    strcpy(st1,st2);
    printf("st1:%s",st1);
    return 0;
}
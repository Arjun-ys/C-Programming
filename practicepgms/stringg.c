#include<stdio.h>
void printString(char arr);
int main()
{
    char arr[]="Hello";//cannot be reinitialized
    //arr="world";
    char *str="Hello";//char pointer
    str="world";
    puts(arr);
    puts(str);
    return 0;
}
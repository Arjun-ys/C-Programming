#include <stdio.h>
int main()
{
    char ch;
    printf("ENter a character:");
    scanf("%c", &ch);
    if(ch>=65 && ch<=90) // or ch>='A' && ch<='Z' will also work
    printf("Character is uppercase");
    else 
    printf("lowercase");
    return 0;
}
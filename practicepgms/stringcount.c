#include<stdio.h>
#include<string.h>
int countLength(char arr[]);
int main()
{
    char name[20];
    printf("Enter a string:");
    fgets(name,20,stdin);//enter a string, 
    //int length=strlen(name);
    //printf("length=%d",length);
    printf("length=%d",countLength(name));
    return 0;
}
int countLength(char arr[])
{
    int length=0;
    for(int i=0;arr[i]!='\0';i++){
        length++;
    }
    return(length-1);//-1 to not count 
}
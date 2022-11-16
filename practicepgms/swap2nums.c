#include<stdio.h>
void swap(int *a,int *b);//swapping using pointers
int main()
{
    int x,y;
    x=2;y=4;
    printf("x=%d and y=%d\n",x,y);
    swap(&x,&y);//call by reference
    printf("Values after swapping: x=%d and y=%d\n",x,y);
    return 0;
}

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

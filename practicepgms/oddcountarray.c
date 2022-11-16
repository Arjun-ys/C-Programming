#include<stdio.h>
int oddcount(int arr[],int size);
int main()
{
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array:");
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int count=oddcount(arr,n);//function call
    printf("Number of odd numbers in the array:%d",count);
    return 0;
}
int oddcount(int arr[],int size)
{
    int c=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        c=c+1;
    }
    return c;
}
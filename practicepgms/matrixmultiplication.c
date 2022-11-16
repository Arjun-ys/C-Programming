#include<stdio.h>
int main()//matrix multiplication
{
    //number of rows and columns of 1st matrix
   int a=3;int b=2;
   //number of rows and columns of 2nd matrix
   int c=2;int d=3;
   int i,j,temp,t;
   int arr1[a][b];
   int arr2[c][d];
   int arr3[a][d];

   if(b==c) //checking if the two matrices can be multiplied
   {
   //1st Matrix
   printf("Enter elements of 1st matrix:\n");
   for(i=0;i<a;i++)
   {
      for (j=0;j<b;j++)
      {
         scanf("%d\n", &arr1[i][j]);
      }
   }
   printf("Enter elements of 2nd matrix:\n");
   for(i=0;i<c;i++)
   {
      for (j=0;j<d;j++)
      {
         scanf("%d\n", &arr2[i][j]);
      }
   }
   //initializing resultant matrix
   for(i=0;i<a;i++)
   {
      for (j=0;j<d;j++)
      {
         arr3[i][j]=0;
      }
   }
   //multiplication
   for(i=0;i<a;i++)
   {
      for (j=0;j<d;j++)
      {
        for(int k=0;k<b;k++){
         temp=arr1[j][k]*arr2[k][j];
         arr3[i][j]=arr3[i][j]+temp;
         temp=0;
        }
      }
   }
   //printing resultant matrix
   for(i=0;i<a;i++) 
   {
      for(j=0;j<d;j++){
      printf("%d  ",arr3[i][j]);
      }
   printf("\n");
   }
   }
   else{
   printf("Invalid Order, Matrices cannot be multiplied");}
   return 0;
}
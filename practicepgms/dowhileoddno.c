#include <stdio.h>
int main()
{
   int n;
   do
   {
      printf("Enter number:");
      scanf("%d", &n);
      printf("%d \n",n);
      if(n%2!=0){//control will exit the do-while loop if this condition is true
      break; }
   } while (1);//1 here means true
   printf("Thank you");
   return 0;
   }
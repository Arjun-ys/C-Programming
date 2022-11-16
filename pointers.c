#include<stdio.h>
int main(){
   int age=22;
   int *ptr = &age; //integer pointer storing the memory address of age variable
   int age_ = *ptr; //value of address stored by ptr is 22.. this is assigned to variable age_ 
   printf("%p \n", &age);
   printf("%p \n", ptr);
   printf("%p \n", &ptr);

   printf("%u \n", &age);
   printf("%u \n", ptr);
   printf("%u \n", &ptr);
}

#include<stdio.h>

int main(){
   int n,i;

   //Taking input from the user
   printf("Enter a number:");
   scanf("%d",&n);

   printf("Even numbers from 1 to %d are:\n ",n);

   //loop to print even numbers
   for(i=1;i<=n;i++){
     if(i%2==0){
        printf("%d",i);
     }
   }

   return 0;
}

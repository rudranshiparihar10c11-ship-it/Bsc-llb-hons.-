#include<stdio.h>
int main()
{
    int i,n;
   long long product=1;
    printf("enter value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product*=i;

    }
   printf("Product of first %d natural numbers = %11d\n",n, product);

     return 0;

}

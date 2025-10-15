#include <stdio.h>

int main() {
    float marks[6],total=0,
  percentage;
       int i;

       printf("Enter marks of 6 subjects:\n");
       for(i = 0;i<6;i++) {
           printf("Subject %d:",i+ 1);
           scanf("%f", &marks[i]);
           total += marks[i];
       }

        percentage=(total/600)*100;


        printf("\ntotal Marks = %.2f",total);
        printf("\npercentage = %.2f%%\n",percentage);


}

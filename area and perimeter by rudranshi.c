#include<stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Enter the length of rectangle");
    scanf("%f",&length);
    printf("Enter the width of rectangle");
    scanf("%f",&width);
    area=length*width;
    perimeter=2*(length+width);
    printf("area of the rectangle=%f&%f/n",area);
    printf("perimeter of the rectangle=%f&%f/n",perimeter);
}


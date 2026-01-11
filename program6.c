//program to find area of circle
#include<stdio.h>
int main()
{
    int radius,area;
    printf("enter the radius of circle\n");
    scanf("%d",&radius);
    area=3.14*radius*radius;
    printf("area of circle is %d\n",area);
    return 0;
}
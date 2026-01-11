//program to find sum of two numbers and taking input from user
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("enter value of a & b \n");
    scanf("%d%d",&a,&b);// here scanf is a function to take value from user
    sum=a+b;
    printf("sum of a & b is %d\n",sum);
    return 0;
}
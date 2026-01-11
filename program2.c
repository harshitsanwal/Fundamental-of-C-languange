//program to demonstrate variable declaration and printing values
#include<stdio.h>
int main()
{
    int a = 10;
    char b ='*';
    int age = 18;
    float pi=3.14;
    int c =30;
    int C =55;        
    int final_marks=33;// there can be no space between variable
    age=19;// value of variable are not constant they can be reasigned
    printf("value of a is%d\n=",a);// here printf  is a function to print the value on the screen
    printf("value of b is %c\n",b);//%c is use print character 
    printf("value of age is %d\n",age);//%d is use to print integer
    printf("value of pi is %f\n",pi);// %f is use to print decimal
    printf("value of c is %d\n",c);
    printf("value of C is %d\n",C);
    printf("value of final_marks is %d\n",final_marks);
    return 0;
}
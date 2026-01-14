# Fundamental-of-C-languange
C-Fundamentals/
├── 01-Basics/              # Hello World, Comments, Escape Sequences
```
# Q1 . program to print hello world:-

#include<stdio.h> //# is preprocesor directive
int main()
{
printf("hello world\n");//'\n' is use to move the cursor in the next line 
printf("first c language program\n");

return 0;
}
 ```
├── 02-Variables-DataTypes/ # int, float, char, constants
```
# Q2 . program to demonstrate variable declaration and printing values


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
# Q3 . program to find two number taking input from user:-

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
# Q4 .program to find area of square:-
#include<stdio.h>
int main()
{
    int side;
    printf("enter side of square\n");
    scanf("%d",&side);
    printf("area of square is%d\n",side*side);
    return 0;
}
```
├── 03-Operators/           # Arithmetic, Relational, Logical, Bitwise
├── 04-Control-Flow/        # if-else, switch, while, for loops
├── 05-Functions/           # Declaration, Definition, Recursion
├── 06-Arrays-Strings/      # 1D/2D Arrays, String library functions
├── 07-Pointers/            # Pointer arithmetic, Pointers to pointers
├── 08-Memory-Management/   # malloc, calloc, realloc, free
├── 09-Structs-Unions/      # typedef, structure padding
├── 10-File-Handling/       # fopen, fscanf, fprintf
├── Projects/               # Small mini-projects applying concepts
└── README.md               # The main documentation file


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


```
├── 03-Operators/           # Arithmetic, Relational, Logical, Bitwise
```
#  Arithmetic operator:-
#include<stdio.h>
int main()
{// a&b are operands in which operators are performed
    //+,-,*,/ are arithmetic operators which perform arithmetic operations
   // all of these are valid operators in c language
    int a=1,b=2;
    int sum=a+b;
    int multiply=a*b;
// their should be single variable in the LHS side of the expression
    //int j+f=a*b; //invalid statement
    //d=bc; //invalid statement
    //a=b^c; //invalid statement
      
return 0;
}
# Relational operator:-
#include<stdio.h>
int main()
{
    int a=2,b=4;
    printf("a=b%d\n",a==b);//1(true)
    printf("a!=b%d\n",a!=b);//0(false)
    printf("a>b%d\n",a>b);//0(false)
    printf("a<b%d\n",a<b);//1(true)
    printf("a>=b%d\n",a>=b);//0(false)
    printf("a<=b%d\n",a<=b);//1(true)
    //!= is called not equal to operator
    return 0;
}
# Logical operators:-
#include<stdio.h>
int main()
{
    printf("%d\n",3>4 && 5>2);// 0(false) because first condition is false
    printf("%d\n",3>4 || 5>2);// 1(true) because second condition is true
    printf("%d\n",!(3>4));// 1(true) because 3>4 is false and !false is true
    return 0;
}
# some question:-
#Q1. WAP to check if a number is divisible by 2 or not :-
#include<stdio.h>
int main()
{
    int a;
    printf("enter the value of a");
    scanf(" %d",&a);
    printf("%d",a%2==0);
    return 0;
   // here if the value is 0 then it is false and if the value is 1 then it is true        
}
#Q2. WAP to tell if the  number is even or odd :-
  #include<stdio.h>
int main()
{// even-> 1
//  odd-> 1
    int a;
    printf("enter the value of a");
    scanf(" %d",&a);
    printf("%d",a%2==0);
    return 0;
}
#Q3. check wheatherca.int a =8^8 is valid or not:-
#include<stdio.h>
int main()
{
  int a =8^8;
  printf("%d",a);
  return 0;
  // yes it is valid as ^ is bitwise xor operator so it will give 0 as output
}

```
├── 04-Control-Flow/        # if-else, switch, while, for loops
├── 05-Functions/           # Declaration, Definition, Recursion
├── 06-Arrays-Strings/      # 1D/2D Arrays, String library functions
├── 07-Pointers/            # Pointer arithmetic, Pointers to pointers
├── 08-Memory-Management/   # malloc, calloc, realloc, free
├── 09-Structs-Unions/      # typedef, structure padding
├── 10-File-Handling/       # fopen, fscanf, fprintf
├── Projects/               # Small mini-projects applying concepts
└── README.md               # The main documentation file


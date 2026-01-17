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
```
#Q1 . if,else & elseif statement in C:-
#include<stdio.h>
int main()
{
  int age;
  printf("Enter the age:");
  scanf("%d",&age);
  if(age>18)
  {
    printf("Adult\n");
    printf("They can vote\n");
    printf("They can drive\n");
  }
   else if(age>13&&age<18)
   {
    printf("Teenager\n");
   }
    else
    { 
    printf("child\n");
    }
   return 0;
}
#Q2 . switch case in c program using integer:-
#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day number (1-7):");
    scanf("%d",&day);
    switch(day)
    {
        case 1:
        printf("Monday\n");
        break;
        case 2:
        printf("Tueday\n");
        break;
        case 3:
        printf("Wednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saturday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Invalid input");
    }
    return 0; 
    }
#Q3 . program to use for statement in looping:-
#include<stdio.h>
int main()
{
    int i;
    for(i=0.0;i<=10.0;i++) // (i++= i+1) after using i for one time it will increase by 1 and for --i it will decrease by 1
    {
        printf("%d\n",i);
        //printf("%f\n",i); // %f is used for float values
    }
    return 0;
}
#Q4 . WAP to print the first five number using while loop
#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```
├── 05-Functions/           # Declaration, Definition, Recursion
```
#Q1 .fuction prototype,function call,function declaration:-
#include<stdio.h>
void add(); //function prototype 
int main()
{
    int a=10,b=20,c;
    add(a,b); //function call
    return 0;
}
void add(int l,int z)//fuction declaration
{
    printf("Hello World\n");   
}
//sum of n natural numbers using functions
#include<stdio.h>
int sum(int n);
int main()
{
    int num,c;
    printf("Enter a number:");
    scanf("%d",&num);
    c=sum(num);
    printf("Enter the sum:%d\n",c);
    return 0;
}
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}
```
├── 06-Arrays-Strings/      # 1D/2D Arrays, String library functions
```
#Q1 .length of  string without using string library:-
#include<stdio.h>
int count(char str[]);
int main()
{
    char str[100];
    int len=0,i;
    printf("Enter the string:");
    gets(str);
    len=count(str);
    printf("Length of the string is:%d\n",len);
    return 0;
}
int count(char ptr[])
{
    int count,i;
    for(i=0;ptr[i]!='\0';i++)
    {
        count++;
    }
    printf("length of the string is:%d\n",count);
    return count-1;
}
```
├── 07-Pointers/            # Pointer arithmetic, Pointers to pointers
```
#Q1 . syntax of pointer:-
#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;// *=value of address operator, &=adress of operator
    int _age=*ptr+1;// * dereferencing operator
    printf("Value of age is:%d",_age);
    return 0;
}
#Q2 .printing address using pointer:-
#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;
    printf("Address of age is:%u\n",ptr);
    printf("Address of age is:%p\n",ptr);
    printf("Address of ptr is:%u\n",&ptr);
    printf("Address of age is:%u\n",&age);
    ++(*ptr);//(*ptr)++ also works
    printf("Value of age is:%d\n",age);
    printf("Value of age using pointer is:%d\n",*ptr);
    return 0;
}
#Q3 . WAP to find the sum,product and average of two numbers using pointers:-
#include<stdio.h>   
void calculate(int a,int b,int *sum,int *product,int *average);     
int main()
{
    int num=20,temp=30,sum,product,average;
    calculate(num,temp,&sum,&product,&average);
     printf("Sum=%d\n",sum);
    printf("Product=%d\n",product);
    printf("Average=%d\n",average);
    return 0;
}
void calculate(int x,int y,int *sum,int *product,int *average)
{
     *sum =x+y;
     *product =x*y;
     *average =(x+y)/2;
}
```
├── 08-Memory-Management/   # malloc, calloc, realloc, free
├── 09-Structs-Unions/      # typedef, structure padding
├── 10-File-Handling/       # fopen, fscanf, fprintf


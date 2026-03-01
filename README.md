# Fundamental-of-C-languange
C-Fundamentals/
├── 01-Basics/              # Hello World, Comments, Escape Sequences
```c
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
```c
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

 Arithmetic operator:-
```c
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
```
 Logical operators:-
```c
#include<stdio.h>
int main()
{
    printf("%d\n",3>4 && 5>2);// 0(false) because first condition is false
    printf("%d\n",3>4 || 5>2);// 1(true) because second condition is true
    printf("%d\n",!(3>4));// 1(true) because 3>4 is false and !false is true
    return 0;
}
```
```
some question:-
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
Malloc :-
```
//malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int*) malloc(5*sizeof(int));
    ptr[0]=1;
    ptr[1]=2;
    ptr[2]=3;
    ptr[3]=4;
    for(int i=0;i<=3;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
```
Calloc:-
```
//calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    ptr[0]=10;
    ptr[1]=20;
    ptr[2]=30;
    ptr[3]=40;
    for(int i=0;i<4;i++)
    {
        printf("%d\n",ptr[i]);
    }
    return 0;
}
```
Realloc:-
```
//realloc
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    printf("Enter the numbver(6):");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,8);
    printf("Enter the number(8):");
    for(int i=0;i<9;i++)
{
     scanf("%d",&ptr[i]);

}
  for(int i=0;i,8;i++)
  {
    printf("number %d is %d",i,ptr[i]);
  }
}
```
Free:-
```
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr=(int *)calloc(5,sizeof(int));
    ptr[0]=1;
    ptr[1]=3;
    ptr[2]=5;
    ptr[3]=7;
    ptr[4]=9;
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
    ptr=realloc(ptr,6);
    ptr[0]=2;
    ptr[1]=4;
    ptr[2]=6;
    ptr[3]=8;
    ptr[4]=10;
    ptr[5]=12;
    for(int i=0;i<6;i++)
    {
        printf("%d\n",ptr[i]);
    }
free(ptr);
    return 0;
}
```
├── 09-Structs-Unions/      # typedef, structure padding
Syntax of structure:-
```
//syntax of structure
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    float marks;
};
int main()
{
    struct student s1;
    s1.id=12;
    strcpy(s1.name,"Harshit Sanwal");
    s1.marks=95.5;
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%.2f\n",s1.marks);
    return 0;
}
```
Storing student details using structure:-
```
//WAP to store and print student details using structure
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    float marks;
};
int main()
{
    struct student s1,s2;
    //storing details of first student
    s1.id=101;
    strcpy(s1.name,"Harshit Sanwal");
    s1.marks=95.5;
    //storing details of second student
    s2.id=102;
    strcpy(s2.name,"stranger kumar");
    s2.marks=89.0;
    //printing details of first student
    printf("Student 1 Details:\n");
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%.2f\n",s1.marks);
    //printing details of second student
    printf("\nStudent 2 Details:\n");
    printf("ID:%d\n",s2.id);
    printf("Name:%s\n",s2.name);
    printf("Marks:%.2f\n",s2.marks);
    return 0;
}
```
Array in structure:-
```
//array of structures
#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[50];
    float marks;
};
int main()
{
    struct student students[3];
    //storing details of students
    students[0].id=101;
    strcpy(students[0].name,"Harshit Sanwal");
    students[0].marks=95.5;

    students[1].id=102;
    strcpy(students[1].name,"Stranger Kumar");
    students[1].marks=89.0;

    students[2].id=103;
    strcpy(students[2].name,"kamlesh Yadav");
    students[2].marks=92.0;

    //printing details of students
    for(int i=0;i<3;i++)
    {
        printf("Student %d Details:\n",i+1);
        printf("ID:%d\n",students[i].id);
        printf("Name:%s\n",students[i].name);
        printf("Marks:%.2f\n\n",students[i].marks);
    }
    return 0;
}
```
Pointer in structure:-
```
//pointer to structure
#include<stdio.h>   
#include<string.h>
struct student
{
    int id;
    char name[50];
    float marks;
};      
int main()
{
    struct student s1;
    struct student *ptr;
    ptr=&s1;
    //storing details using pointer
    ptr->id=101;
    strcpy(ptr->name,"Harshit Sanwal");
    ptr->marks=95.5;
    //printing details using pointer
    printf("Student Details:\n");
    printf("ID:%d\n",ptr->id);
    printf("Name:%s\n",ptr->name);
    printf("Marks:%.2f\n",ptr->marks);
    return 0;
}
 ```
Typedef in structure :-
```
//typedef in structures
#include<stdio.h>
#include<string.h>
typedef struct student
{
    int id;
    char name[50];
    float marks;    
}stu;
int main()
{
    stu s1;
    s1.id=101;
    strcpy(s1.name,"Harshit Sanwal");
    s1.marks=95.5;
    printf("Student Details:\n");
    printf("ID:%d\n",s1.id);
    printf("Name:%s\n",s1.name);
    printf("Marks:%.2f\n",s1.marks);
    return 0;
}
```
Question:-
Q1:-WAP to struct two vector then make afuction to return sum of 2 vectors?
```
#include<stdio.h>
struct vector
{
    int x;
    int y;
};
struct vector add(struct vector v1,struct vector v2);
int main()
{
    struct vector vec1,vec2,sum;
    //storing values in first vector
    vec1.x=10;
    vec1.y=20;
    //storing values in second vector
    vec2.x=30;
    vec2.y=40;
    //calling function to add two vectors
    sum=add(vec1,vec2);
    printf("Sum of Vectors:\n");
    printf("X:%d\n",sum.x);
    printf("Y:%d\n",sum.y);
    return 0;
}
struct vector add(struct vector v1,struct vector v2)
{
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
```
Q2:-Create a structure of complex number using arrow operator?
```
#include<stdio.h>   
struct complex
{
    int real;
    int imag;
};  
int main()
{
    struct complex c1;
    struct complex *ptr;
    ptr=&c1;
    //storing values using pointer
    ptr->real=5;
    ptr->imag=8;
    //printing values using pointer
    printf("Complex Number:\n");
    printf("Real:%d\n",ptr->real);
    printf("Imaginary:%d\n",ptr->imag);
    return 0;
}
```
Q3:- Make a structure to store detail of a bank?
```
#include<stdio.h>
#include<string.h>
typedef struct bank{
    int acc_no;
    char name[100];
} acc;
int main()
{
    acc acc1={12345678,"Harshit Sanwal"};
    acc acc2={12345679,"Stranger Kumar"};
    acc acc3={12345680,"Kamlesh Yadav"};
    printf("acc no=%d\n",acc1.acc_no);
    printf("name=%s\n",acc1.name);
    return 0;

}
```
├── 10-File-Handling/       # fopen, fscanf
File pointer:-


1.
```

//file pointer 
#include<stdio.h>
int main()
{
    FILE *fptr;//create a file pointer
    fptr=fopen("yoyo.txt","r");//open a file in read mode
    fclose(fptr);//closing the file
    return 0;
}
```
2.
```
#include<stdio.h>
int main()
{
    FILE *ptr;
    ptr=fopen("Hello.txt","r");
    if(ptr==NULL)
    {
        printf("file doesn't exist\n");
    }
    else 
    {
        fclose(ptr);
    }
    return 0;
```
using fscanf:-
```
#include<stdio.h>
int main()
{
    FILE *fstr;
    fstr=fopen("yoyo.txt","r");
    char ch;
    fscanf(fstr,"%c",&ch);
    printf("character=%c\n",ch);
        fscanf(fstr,"%c",&ch);
    printf("character=%c\n",ch);

        fscanf(fstr,"%c",&ch);
    printf("character=%c\n",ch);

        fscanf(fstr,"%c",&ch);
    printf("character=%c\n",ch);

        fscanf(fstr,"%c",&ch);
    printf("character=%c\n",ch);

    return 0;
}
```
using of fgetc:-
```
#include<stdio.h>
int main()
{
    FILE *og;
    og=fopen("yoyo.txt","r");
    char c;
    c=fgetc(og);
    while(c!=EOF)
    {
        printf("%c",c);
        c=fgetc(og);
    }    
     printf("\n");
    fclose(og);
    return 0;
}
```
Some Questions:-
Q1.WAP to write all odd the number from 1 to n in a file where n is enter from the user?
```
#include<stdio.h>
int main()
{
    FILE *sr;
    int num,i;
    sr=fopen("odd.txt","w");
    printf("Enter the number:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        if(i%2!=0)
        {
            fprintf(sr,"%d\n",i);
        }
    }
    fclose(sr);
    return 0;
}
```
Q2. Adding two number in a file?
```
#include<stdio.h>
int main()
{
    FILE *file;
    file=fopen("sum.txt","r");\\reading a file will not change the data in the file 
    int a,b;
    fscanf(file,"%d\n",&a);
    fscanf(file,"%d\n",&b);
    fclose(file);
    file==fopen("sum.txt","w");\\ writing a file this  will overight the data already present in the file  
    fprintf(file,"%d",a+b);
    fclose(file);
    return 0;
}
```

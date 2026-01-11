# Fundamental-of-C-languange
C-Fundamentals/
├── 01-Basics/              # Hello World, Comments, Escape Sequences
├── 02-Variables-DataTypes/ # int, float, char, constants
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
```
//check the given character is present in string or not
#include<stdio.h>
int checkchar(char str[],char ch);
int main()
{
    char str[100],ch;
    int result;
    printf("Enter the string:");
    fgets(str,100,stdin);
    printf("Enter the character to be checked:");
    scanf("%c",&ch);
    result=checkchar(str,ch);
    if(result==1)
    {
        printf("Character %c is present in the string\n",ch);
    }
    else
    {
        printf("Character %c is not present in the string\n",ch);
    }
    return 0;
}
int checkchar(char ptr[],char c)
{
    int i;
    for(i=0;ptr[i]!='\0';i++)
    {
        if(ptr[i]==c)
        {
            return 1; //character found
        }
    }
    return 0; //character not found
}

```

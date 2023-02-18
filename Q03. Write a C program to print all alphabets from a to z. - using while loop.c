//Q03. Write a C program to print all alphabets from a to z. - using while loop
#include<stdio.h>
int main()
{  char a='a';
    while(a<='z')
    {
        printf("%c ",a++);
    }
    return 0;
}

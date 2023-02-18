//Q05. Write a C program to print all odd number between 1 to 100.
#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100)
    {   if(n%2==1)
        printf("%d ",n);
        n++;
    }
    return 0;

}

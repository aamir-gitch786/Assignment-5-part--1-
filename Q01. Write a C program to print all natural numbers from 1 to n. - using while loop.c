//Q01. Write a C program to print all natural numbers from 1 to n. - using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);
    int count=1;
    while(count<=n)
    {
        printf("%d ",count++);
    }
    return 0;
}

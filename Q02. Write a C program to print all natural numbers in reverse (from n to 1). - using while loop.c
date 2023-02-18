//Q02. Write a C program to print all natural numbers in reverse (from n to 1). - using while loop
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of N : ");
    scanf("%d",&n);

    while(n)
    {
        printf("%d ",n--);
    }
    return 0;
}



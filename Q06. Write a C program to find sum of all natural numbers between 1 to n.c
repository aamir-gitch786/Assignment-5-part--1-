//Q11. Write a C program to find first and last digit of a number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=-1,dublicate,denominator;
    printf("Enter the size of N : ");
    scanf("%d",&n);
    dublicate=n;

    while(n)
    {
        n/=10;
        count++;//this variable will store the number of digit.
    }
   denominator=pow(10,count);
    printf("The first digit of number is %d and last digit of number is %d",dublicate/denominator,dublicate%10);

}


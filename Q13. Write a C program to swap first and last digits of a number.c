//Q13. Write a C program to swap first and last digits of a number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=-1,dublicate,deno,result;
    printf("Enter the size of N : ");
    scanf("%d",&n);
    dublicate=n;


    while(n)
    {
        n/=10;
        count++;//this variable will store the number of digit.
    }
    n=dublicate;
   deno=pow(10,count);


  printf("%d",(n%10*deno)+(n%deno/10)*10+(n/deno));


}

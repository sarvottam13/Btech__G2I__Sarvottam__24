// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int n,sum=0,r,num;
    printf("enter any no");
    scanf("%d", &n);
    num = n;
    while (n>0)
    {
    r= n%10;
    sum=sum+r*r*r;
    n=n/10;
    }
    if (sum==num)
    printf("no is armstrong");
    else
    printf("not armstrong no");
    return 0;
}
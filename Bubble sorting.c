#include<stdio.h>
int main()
{ 
int a[100],n,i,j,swap;
printf("enter number of element\n");
scanf("%d",&n);
printf("enter %d integer \n");
for (i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
for(j=0;(n-i-1);j++)
{
if(a[j]>a[j+1])
{
swap=a[j];
a[j]=a[j+1];
  }
 }
}
printf("sorted list in ascending order\n");
for(i=0;i<n;i++)
printf("%d\n",a[i]);
return 0;
}

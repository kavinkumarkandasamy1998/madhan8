#include <stdio.h>
#include<conio.h>
void main()
{
long int n,i,j,t;
printf("enter a number");
scanf("%ld",&n);
long int a[n];
for(i=0;i<n;i++)
{
scanf("%ld ",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
 if(a[i]>a[j])
{
 t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
for(i=0;i<n;i++)
 printf("%ld ",a[i]);
}

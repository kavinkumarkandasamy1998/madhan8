#include<stdio.h>
#include<conio.h>
void main()
{
char a[50]="burn it down";
int i,count=0;
for(i=0;a[i]!=='\0';i++)
{
if(a[i]==".")
count++;
}
printf("%d",count+1);
return 0;
}

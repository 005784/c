#include<stdio.h>
int arraysearch(int a[],int size,int n)
{
int i;
for(i=0;i<size;i++)
{
if(n==a[i])
{
return 1;
}
}
return 0;
}
void main()
{
int a[5]={5,6,7,8,9};
int n;
printf("enter a search number");
scanf("%d",&n);
if(arraysearch(a,5,n))
{
printf("number is present");
}
else{
printf("number is not present");
}
}

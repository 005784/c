#include<stdio.h>
void main()
{
int *a,i,j,tmp,n;
printf("sort an array using pointer:\n");
printf("input the number of elements to store in the array:");
scanf("%d",&n);
printf("input %d number of elements in an array:\n",n);
for(i=0;i<n;i++)
{
printf("element %d",i+1);
scanf("%d",a+1);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(*(a+i)>*(a+j))
{
tmp=*(a+i);
*(a+i)=*(a+j);
*(a+j)=tmp;
}
}
}
printf("the elements n the array after sorting:\n");
for(i=0;i<n;i++)
{
printf("element %d %d",i+1,*(a+i));
}
}

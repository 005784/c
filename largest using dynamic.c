#include<stdio.h>
#include<stdlib.h>
int main()
{
int i ,n;
int *fp;
printf("largest number using dynamic memory allocation\n");
printf("enter the total number of elements\n");
scanf("%d",&n);
fp=(int*)calloc(n,sizeof(int));
if(fp==NULL)
{
printf("memory is not allocated\n");
exit(0);
}
for(i=0;i<n;i++)
{
printf("enter number%d:",i+1);
scanf("%d",fp+1);
}
for(i=1;i<n;++i)
{
if(*fp<*(fp+i))
fp=(fp+i);
}
printf("largest number is:%d\n",*fp);
return 0;
}

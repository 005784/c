#include <stdio.h>
void main()
{
int a,b ,*p1=&a,*p2=&b;
printf("enter the values of a and b\n");
scanf("%d%d",&a,&b);
printf("values of *p1=%d*p2=%d",*p1,*p2);

}

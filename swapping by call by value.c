#include <stdio.h>
void main()
{
int a,b;
printf("enter a and b value:");
scanf("%d%d",&a,&b);
printf("before swapping\nx=%d\ny=%d\n",a,b);
swap(a,b);
}
void swap(int x,int y)
{
   int temp;
   temp=x;
   x=y;
   y=temp;
   printf("after swapping:\nx=%d\ny=%d\n",x,y);

}

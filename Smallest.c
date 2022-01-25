#include <stdio.h>
void main()
{
int a,b,c;
printf("enter three numbers:");
scanf("%d%d%d",&a,&b,&c);
while(a<b&&a<c)
{

printf("%d is smallest" ,a);
break;
}
while(b<a&&b<c)
{
printf("%d is smallest",b);
break;
}
while(c<a&&c<b)
{

printf("%d is smallest",c);
break;
}


}

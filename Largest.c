#include <stdio.h>
void main()
{
int a,b,c;
printf("enter a value:\n");
printf("enter b value:\n");
printf("enter c value:\n");
 scanf("%d%d%d", &a,&b,&c);
if(a>b&&a>c)
{
printf("%d is largest ",a);
}
else if(b>a&&b>c)
{
printf("%d is largest ",b);
}
else
{
printf("%d is largest ",c);
}
}

#include <stdio.h>
#include <conio.h>

void main()
{
int j,k,day,dt=1;
char month;

printf("enter total number of days in a month");
scanf("%d",&day);
printf(" enter the month");
scanf("%c",&month);
printf("\n\n enter first day start from weekday");
scanf("%d",&k);
printf("\nMon\t Tue\t wed\t thu\t fri\t sat\t sun");
for(j=k;j>0;j--)
{
printf("\t");
}
while(dt<=day)
{
if(k!=0)
{
if(k%7==0)
printf("\n");
}
printf("%d\t",dt);
dt++;
k++;
}
getch();

}

#include <stdio.h>
void main()
{
float percentage;
float sum;
char grade;
float  physics,chemistry,biology,mathematics,computer;
printf("enter the marks in five subjects\n");
scanf("%f%f%f%f%f",&physics,&chemistry,&biology,&mathematics,&computer);
sum=physics+chemistry+biology+mathematics+computer;
percentage =(sum/500)*100;
if(percentage>=90)
{
printf("grade a");

}
else if(percentage>=80){
printf("grade b");
}
else if(percentage>=70)
{
printf("grade c");
}
else if(percentage>=60)
{
printf("grade d");
}
else if(percentage>=40)
{
printf("grade e");
}
else
{
printf("grade f");
}


}

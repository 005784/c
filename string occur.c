#include <stdio.h>
#include <string.h>
void Max_Occuring(char*str);
int main()
{
char str[100];
printf("enter a string:");
gets(str);
Max_Occuring(str);
return 0;
}
void Max_Occuring(char *str)
{
int i;
int max=0;
int freq[256]={0};
for(i=0;str[i]!='\0';i++)
{
   freq[str[i]]=freq[str[i]]+1;
}
for(i=0;i<256;i++)
{
  if(freq[i]>freq[max])
   {
       max=i;
   }
}
printf("\nCharacter %c appears maximun of %d times in a given string: %s",max,freq[max],str);
}

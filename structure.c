#include<stdio.h>
#include<stdlib.h>
struct College
{
   char collegename[20];
   char location[20];

}college;
struct Faculty
{
    char name[20];
    char subject[20];
    int experience;


}faculty;


int main()
{
    FILE *fptr1 ,*fptr2;
    fptr1=fopen("college.txt","r");
    fptr2=fopen("faculty.txt","r");
    if(fptr1 ==NULL && fptr2==NULL)
    {
        printf("error in opening file");
        exit(1);
    }
    while(fread(&college,sizeof(struct College),1,fptr1))
    {

        printf("collegename=%s\n location=%s\n",college.collegename,college.location);
    }
    while(fread(&faculty,sizeof(struct Faculty),1,fptr2))
    {
        printf("name=%s\n subject=%s\n experience=%d\n",faculty.name,faculty.subject,faculty.experience);
    }
    fclose(fptr1);
    fclose(fptr2);

}

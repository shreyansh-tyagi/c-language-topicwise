#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int id,age;
    char name[50];
    struct dateofbirth{
        int day,month,year;
    }d;
}s[50],*p;
void structure_function(struct student *ptr,int); //function declaration
void main()
{
    p=s;
    int i,n;
    void (*structure_function_pointer)(struct student *ptr,int); //this function pointer points to that 
    //function only which have two argument of structure student type and int type with no return type 
    structure_function_pointer=&structure_function;
    printf("\nenter the number of student ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("\nenter id: ");
    scanf("%d",&(p+i)->id);
    printf("\nenter age: ");
    scanf("%d",&(p+i)->age);
    printf("\nenter name: ");
    scanf("%s",(p+i)->name);
    printf("\nenter the day,month,year: ");
    scanf("%d%d%d",&(p+i)->d.day,&(p+i)->d.month,&(p+i)->d.year);
    }
    structure_function_pointer(p,n);
}
void structure_function(struct student *ptr,int n)
{
    int i;
     for(i=0;i<n;i++)
    {
    printf("\nid: %d",(p+i)->id);
    printf("\nage: %d",(p+i)->age);
    printf("\nname: %s",(p+i)->name);
    printf("\ndate-of-birht: %d-%d-%d",(p+i)->d.day,(p+i)->d.month,(p+i)->d.year);
    }
}
#include<stdio.h>
void swap(int *,int *);  //function declaration that have two integer pointer argument and returing a integer value 
void main()
{
    int a,b;
    void (*ptr)(int *,int*); //function pointer that can point to the function that have two integer 
                             //pointer argument and return a integer value 
    printf("enter the value of a and b: \n");
    scanf("%d%d",&a,&b);
    printf("before swap: a=%d\nb=%d",a,b);
    ptr=&swap; //passing the address of swap function block to function pointer ptr
    ptr(&a,&b);
    printf("after swap: a=%d\nb=%d",a,b);
}
void swap(int *x,int *y)
{
    int temp=0;
    temp=*x;
    *x=*y;   //call by reference process
    *y=temp;
    printf("after swap: x=%d\ny=%d",x,y);
}

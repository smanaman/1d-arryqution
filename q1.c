#include<stdio.h>
int main(){
    int size;
    printf("enter your value");
   scanf("%d",&size);
   
int arr[size];
for (int i = 0; i<size; i++)
{
   printf("enter your value:- ");
    printf("arr[%d]= ",i);
   scanf("%d",&arr[i]);
}

int langth=sizeof(arr)/sizeof arr[0];
printf("your langth is :-%d",langth);

}
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;  
    b=c;
    printf("the value of a and b after swapping is %d and %d",a,b);      
}
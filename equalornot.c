//Write a program to check whether two numbers are equal or not.
#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    if(a==b){
        printf("the numbers are equal");
    }
    else{
        printf("the numbers are not equal");
    }
    return 0;
}
//Write a C program to check whether a number is an Armstrong number
#include<stdio.h>
int main(){
    long int original,num,rem,sum=0;
    printf("enter your no. so that we can check whether it is an armstrong no. or not:");
    scanf("%ld",&num);
    original=num;
    while(num>0){
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;

    }
    if(sum==original){
        printf("the no. is an armstrong no.\n");
    }
    else{
        printf("the no. is not an armstrong no.\n");
    }
    return 0;


}
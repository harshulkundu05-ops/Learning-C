#include<stdio.h>
int main(){
    int a,i;
    printf("enter your no. so that we can check whether it is a prime number or not:");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
        if(a%i==0){
            printf("the number is not a prime number");
            return 0;
        }
    }
    printf("the number is a prime number");
    return 0;
}
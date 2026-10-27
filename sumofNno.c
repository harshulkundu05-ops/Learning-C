#include<stdio.h>
long int main(){
    long int i,n,sum=0;
    printf("enter the value of n:");
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum of first %ld natural numbers is %ld",n,sum);
    return 0;
}
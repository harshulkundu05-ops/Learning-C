#include<stdio.h>
int main(){
    int num, rem, sum = 0,org;
    printf("enter your no. so that we can find the sum of its digits:");
    scanf("%d",&num);
    org=num;
    while(num>0){
        rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    printf("the sum of digits of %d is %d\n",org,sum);
    return 0;

}

#include <stdio.h>
int main(){
    int fact,num,rem,sum=0,org,i;
    printf("enter your no. so that we can check whether it is a strong number or not:");
    scanf("%d",&num);
    org=num;
    while(num>0){
        fact=1;
        rem=num%10;
        for(i=1;i<=rem;i++){
            fact*=i;
            
        }
        sum=sum+fact;
        num=num/10;
    }
    if(sum==org){
        printf("the number is a strong number");
    }
    else{
        printf("the number is not a strong number");
    }
    return 0;
}
//	Write a program to accept marks of 5 subjects, find the sum and calculate percentage
#include<stdio.h>
int main(){
    int mar[5],sum=0,i;
    float percen;
    printf("enter your marks in 5 subjects:");
        for(i=0;i<5;i++){
            scanf("%d",&mar[i]);
            sum+=mar[i];

        }
        percen=(sum/5.0);
        printf("your Sum is %d\n",sum);
        printf("your percentage is %.2f\n",percen);
        return 0;


}
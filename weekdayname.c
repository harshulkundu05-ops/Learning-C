#include<stdio.h>
int main(){
    int a;
    printf("enter the no. of the weekday(1-7):");
    scanf("%d",&a);
    switch(a){
        case 1:
            printf("the weekday is monday");
            break;
        case 2:
            printf("the weekday is tuesday");
            break;
        case 3:
            printf("the weekday is wednesday");
            break;
        case 4:
            printf("the weekday is thursday");
            break;
        case 5:
            printf("the weekday is friday");
            break;
        case 6:
            printf("the weekday is saturday");
            break;
        case 7:
            printf("the weekday is sunday");
            break;
        default:
            printf("invalid input");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n,sum=0,arr[100],i;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum of elements: %d",sum);
    return 0;
}
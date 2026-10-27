#include<stdio.h>
int main(){
    int key,n,arr[100],i;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search:");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            printf("element found at index %d\n",i);
            break;
        }
    }
    printf("element not found\n");
    return 0;
}    


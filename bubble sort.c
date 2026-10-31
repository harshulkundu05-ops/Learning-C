#include<stdio.h>
int main(){
    
    int i,j,temp;
    int a[]={9,1,7,2,6,4};
    for(i=0;i<6;i++){
        for(j=0;j<5-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<6;i++){
        printf("%d ",a[i]);
    }
    return 0;
}

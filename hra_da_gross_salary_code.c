#include <stdio.h>
int main(){
    float BSAL,HRA,DA,GRSSAL;
    printf("enter your basic salary:");
    scanf("%.2f",&BSAL);
    HRA=BSAL*0.08;
    DA=BSAL*0.05;
    GRSSAL=BSAL+HRA+DA;
    printf("your basic salary is: %.2f\n",BSAL);
    printf("your HRA is: %.2f\n",HRA);
    printf("your DA is: %.2f\n",DA);
    printf("your gross salary is: %.2f\n",GRSSAL);
    printf("thank you for using this program");
    return 0;
}
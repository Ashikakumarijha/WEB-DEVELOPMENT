#include<stdio.h>
    int main(){
    float principal ,rate,time;
    printf("Enter the principal:" );
    scanf("%f", &principal);
    printf("Enter the rate:");
    scanf("%f", &rate);
    printf("Enter the time:");
    scanf("%f", &time);
    float si=(principal*rate*time)/100;
    
    printf("the simple interest is:%.2f", si);
    
    
    return 0;
}














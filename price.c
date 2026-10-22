#include<stdio.h>
void printprice(float s);
int main(){
    float s;
    printf("enter the price:");
    scanf("%f",&s);
    printprice(s);
}

void printprice(float s){
    s=s+(0.18*s);
    printf("price is:%f",s);
}
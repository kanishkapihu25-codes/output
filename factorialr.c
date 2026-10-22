#include<stdio.h>
int factorial(int n);
int main(){
    printf("factorial is :%d",factorial(25));
    return 0;

}

int factorial(int n){
    if(n==1){return 1;}

    int factnm1=factorial(n-1);
    int factn1=factnm1*n;
    return factn1;

}

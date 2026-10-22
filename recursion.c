#include<stdio.h>
int printsum(int n);
int main(){
printf("sum is %d", printsum(9684));
return 0;
}

int printsum(int n){
    if(n==1){return 1;}
int sumnm1=printsum(n-1);
int sumn1=sumnm1+n;
return sumn1;

}
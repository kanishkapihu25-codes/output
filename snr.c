#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
     int i=1;
     int sum=0;
     while(i<=n)
     {sum=sum+i;
        i++;}
    printf("sum is:%d\n",sum);
int g=n;
while(g>=1){
    printf("%d\n",g);
    g--;
}
    return 0;

    
}
#include<stdio.h>
int main(){
    int n;
    printf("enter n");
    scanf("%d",&n);
    int table;
    for(int i=1;i<=n;i++)
    {table=n*i;
    printf("%d\n",table);}
    for(int i=n+1;i<=10;i++)
    {table=i*n;
    printf("%d\n",table);}
    return 0;
}
#include<stdio.h>
#include<math.h>
void printsquare(int n);
void printrectangle(int s);
void printcircle(int r);
int main(){
    int n;
    printf("enter the side of square");
    scanf("%d",&n);
    printsquare(n);
    int s;
    printf("enter the side of rectangle");
     scanf("%d",&s);
    printrectangle(s);
    int r;
    printf("enter the radius");
     scanf("%d",&r);
    printcircle(r);
    return 0;}

    void printsquare(int n){
        printf("%f",pow(n, 2));
    }
    void printrectangle(int s){
        printf("%f",pow(s, 2));
    }

    void printcircle(int r){
        printf("%f",3.14*pow(r, 2));
    }
    

    


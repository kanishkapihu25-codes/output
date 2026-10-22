#include<stdio.h>
float percentage(float marks);
int main(){
     int sci=67;
    int math=89;
    int sanskrit=78;
    int marks=sanskrit+sci+math;
     
    printf("DGPA of this student is:%f",percentage(marks));
    return 0;

}

float percentage(float marks){
   
   
   
    float total=marks/3;
    return total;

}

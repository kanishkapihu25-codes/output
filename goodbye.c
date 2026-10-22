#include<stdio.h>
void printhello();//this is a declaration where we aretelling this function to compiler
void printgoodbye();
int main(){
    printhello();/*Here,we are commanding compiler to run the function 
                according to sequence where we can repeat the function many times*/
    printgoodbye();
    printhello();
    return 0;
}
void printhello(){printf("Hello\n");}//This is the statement or the work for which the function is responsible.
void printgoodbye(){printf("goodbye\n");}

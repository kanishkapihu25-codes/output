#include<stdio.h>
int main(){
  char character;
  printf("enter the character");
  scanf("%c",&character);
  if(character>='A' && character<='Z' )
  {printf("upper case\n");}
  else{printf("lower case\n");}
  return 0;
}
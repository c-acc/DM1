#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  int n,d1=0,d2=0;
  
  printf("Rolling dice...\n");
  srand((unsigned int)time(NULL));
  
  d1=rand%6;
  d2=rand%6;
  
  printf("Die 1: %d\n",d1);
  printf("Die 2: %d\n",d2);
  
  n=d1+d2;
  printf("Total value: %d\n",n);
  
  if(n>7){
  printf("You won\n");
  }else {
  printf("You lost\n");
  }
  
  
  return 0;
}

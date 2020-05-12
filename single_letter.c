#include<stdio.h>
int main(){
  
  
  char response;
  printf("Question (Y/N)? ");
  scanf("%c", &response);
  if(response == 'Y' || response == 'y'){
    printf("YES");
  }else if(response == 'N' || response == 'n'){
    printf("N0");
  }else{
    printf("Please enter Y/N or y/n....!");
  }
}
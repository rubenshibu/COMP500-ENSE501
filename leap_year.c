#include<stdio.h>
#include<stdbool.h>
int leapYear(int);
int main(){


    int year;
  bool result;
  printf("year? ");
  scanf("%d", &year);
  result = leapYear(year);
  result?printf("%d, is a leapyear!.", year): printf("%d, is not a leapyear!.", year);
}

 int leapYear(int year){
  if(year%400 == 0){
    return true;
  }else if(year % 100 == 0){
    return false;
  }else if(year % 4 == 0){
    return true;
  }else{
    return false;
  }
}
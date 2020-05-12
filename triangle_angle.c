#include<stdio.h>
#include<stdbool.h>
int checkRightAngledTriangle(int, int, int);
int checkValidTriangle(int, int, int);
int main(){

  int angle1, angle2, angle3;
  printf("Enter the first angle (in degrees): ");
  scanf("%d", &angle1);
  printf("Enter the second angle (in degrees): ");
  scanf("%d", &angle2);
  printf("Enter the third angle (in degrees): ");
  scanf("%d", &angle3);
  if(checkValidTriangle(angle1, angle2, angle3)){
    if(checkRightAngledTriangle(angle1, angle2, angle3)){
      printf("%d, %d and %d is a valid Trianngle and right angled triangle. ", angle1, angle2, angle3);
    }else{
      printf("%d, %d and %d is a right angled triangle. ", angle1, angle2, angle3);
    }
  }else{
    printf("%d, %d and %d is not  a valid Trianngle.  ", angle1, angle2, angle3);
  }
}

int checkValidTriangle(int angle1, int angle2, int angle3){
  
  if(angle1 != 0 && angle2 != 0 && angle3 != 0)
  {
    int sum =  angle1 + angle2 + angle3;
    return (sum == 180) ? true : false;
     
  }else{
    return false;
  }
    
}

int checkRightAngledTriangle(int angle1, int angle2, int angle3){
  
    if(angle1 == 90 || angle2 == 90 || angle3 == 90){
      return true;
    }else{
      
      return false;
    }
  
}
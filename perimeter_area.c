#include<stdio.h>
float areaRectangle(float, float);
float perimeterRectangele(float, float);
int main()
{
  
  float width = 0.0f;
  float height = 0.0f;
  float area, perimeter;

    printf("Rectangle \' s Width: ");
    scanf("%f", &width);
    printf("Rectangle \' s Height: " );
    scanf("%f", &height);
    area = areaRectangle(width, height);
    perimeter = perimeterRectangele(width, height);
    
    printf("Area is : %.2f\n", area);
    printf("Perimeter is : %.2f\n ", perimeter);
    

  
}

float areaRectangle(float width, float height){
  return width*height;
}

float perimeterRectangele(float width, float height){
  return 2*(width + height);
}
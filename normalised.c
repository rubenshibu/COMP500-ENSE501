#include<stdio.h>
#include<math.h>
int main(){
  
  float lengthSquared, length, x , y , z, nx, ny, nz;
  lengthSquared = x = y = z = nx = ny = nz = 0.0f;
  
  printf("x? ");
  scanf("%f", &x);
  printf("Y? ");
  scanf("%f", &y);
  printf("Z? ");
  scanf("%f", &z);
  
  lengthSquared = ((x * x) + (y * y) + (z * z));
  length = sqrt(lengthSquared);
  
  
  nx = x/length;
  ny = y/length;
  nz = z/length;
  
  printf("Normalised: \nnx = %f, ny = %f , nz = %f \n", nx,ny,nz);
  
}
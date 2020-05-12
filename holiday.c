#include<stdio.h>1

int main()
{
    char dir;
    float temp;
    printf("What is  your preferred destination temperature ? ");
    scanf("%f",&temp);
    printf("What you prefer, North or South ?  (n/s)");
    scanf(" %c",&dir);
    if(dir=='n'){
        if(temp>=20)printf("Auckland");
        if(temp<20)printf("Wellington");
    }
    else {
        if(temp>=20)printf("Christchurch");
        if(temp<20)printf("Dunedin");
    }
}

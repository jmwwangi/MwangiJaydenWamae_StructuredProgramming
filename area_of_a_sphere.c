#include <stdio.h>
#include <stdlib.h>

int main(){
    float radius;
    const float pi = 3.142;

    printf("Enter the radius of the sphere: \n");
    scanf("%f", &radius);

    float volume = 4.0/3.0*pi*radius*radius*radius;
    printf("Area: %f", volume);
    return 0;
}
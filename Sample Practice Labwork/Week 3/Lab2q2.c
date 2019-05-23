

#include <stdio.h>

int main ()

{
    float height, width, length;
    
    height = 10;
    width = 2.5;
    length = 11.5;
    
    //Below calculates the volume of the box
    printf("The volume of the box is %f\n\n", height*width*length);
    
    //Below calculates the surface area of the box
    printf("The surface area of the box is %f\n\n", width*length);
    
    return 0;
    
}
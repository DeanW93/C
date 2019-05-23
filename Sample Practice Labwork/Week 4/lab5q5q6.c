
#include <stdio.h>

int main()

{
    float tempc, tempf;
    
    printf("Enter a temperature in degrees fahrenheit:");
    scanf("%f", &tempf);
    flushall();
    
    tempc=(tempf-32.0)*(5.0/9.0);
    
    printf("%.3f degrees Fahrenheit is %.3f in Celcius", tempf, tempc);
    
    getchar();
    
    return 0;
    
}
    
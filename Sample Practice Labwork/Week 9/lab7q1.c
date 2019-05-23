/*This is to test what is in a[8] after the loops are excecuted
*/

#include <stdio.h>

int main()
{
    int a[8];
    int i;
    
    for (i = 0; i < 10; i++)
    {
        a[i] = 9 - i;
    }
    
    for (i = 0; i < 10; i++)
    {
        a[i] = a[ a[i] ];
    }
    
    printf("\n\n %d is in a[8]", a[8]);
    getchar();
    return 0;
    
}
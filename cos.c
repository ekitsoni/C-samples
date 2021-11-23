#include <stdio.h>
#include <math.h>
#define pi 3.14159265359

int main ()
{
    system ("chcp 1253");
    int i,j;
    double x,z,y,p,v,moires,o;
    
    printf("Δώσε τις μοίρες\n");
    scanf("%lf",&moires);
    
    x=2*pi*moires/360;
    o=cos(x);
    printf("%lf",o);
}

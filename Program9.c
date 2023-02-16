//Use of pow, sqrt functions on floating point values. take three variables from user example a,b,c . a and b use in power and c use in sqrt function
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    double p=pow(a,b);
    double s=sqrt(c);
    printf("%lf\n%lf",p,s);
    return 0;
}
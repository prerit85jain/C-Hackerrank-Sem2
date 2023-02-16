//Use of floor and ceil functions on floating point values.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float x;
    scanf("%f",&x);
    printf("%.6f\n",floor(x));
    printf("%.6f",ceil(x));
    return 0;
}
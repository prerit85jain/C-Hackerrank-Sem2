//There is a group of ant which on the start of day makes itself K times, it was previous day. Initially its count was C. You have to find its population on N th day.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int C,K,N;
    scanf("%ld%ld%ld",&C,&K,&N);
    C = C * pow(K, N);
    
    printf("%ld",C);
    return 0;
}
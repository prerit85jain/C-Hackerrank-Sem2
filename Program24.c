//You are given Principal Amount P, rate R and time T. Calculate Final Amount with Simple Interest on it.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int p,r,t,si;
    scanf("%d%d%d",&p,&r,&t);
    si = (p*r*t)/100;
    printf("%d",si + p);
    return 0;
}

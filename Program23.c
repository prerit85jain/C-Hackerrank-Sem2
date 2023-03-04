//You are given time = 2 Years. You have to take Principal Amount P and rate R from user and calculate and print compound interest.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float p,r,ci,t=2;
    scanf("%f%f",&p,&r);
    ci=p * pow((1+(r/100)),t) - p;
    printf("%.2f",ci);
    return 0;
}

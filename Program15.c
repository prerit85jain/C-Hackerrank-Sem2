//You are given prices of three smart phones, P1, P2 and P3. You are also given amount A that you have. You have to find the probability P of buying that phone for each phone.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    float p1,p2,p3,a;
    scanf("%f%f%f%f",&p1,&p2,&p3,&a);
    int c=0;
    if(p1<=a){
        c++;
    }
    if(p2<=a){
        c++;
    }
    if(p3<=a){
        c++;
    }
    if(p1<=a){
        printf("%.3f\n",1.0/c);
    }
    else{
        printf("0.000\n");
    }
    if(p2<=a){
        printf("%.3f\n",1.0/c);
    }
    else{
        printf("0.000\n");
    }
    if(p3<=a){
        printf("%.3f\n",1.0/c);
    }
    else{
        printf("0.000\n");
    }
    return 0;
}

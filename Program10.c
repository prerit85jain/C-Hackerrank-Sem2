//You have to tell him whether it is profit or loss along with the percentage of loss/profit.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float c,s,pl;
    scanf("%f%f",&c,&s);
    if(s>=c){
        printf("Profit\n");
        pl=((s-c)/c)*100;
        printf("%.2f%%",pl);
    }
    else if(s<=c){
        printf("Loss\n");
        pl=((c-s)/c)*100;
        printf("%.2f%%",pl);
    }
    return 0;
}

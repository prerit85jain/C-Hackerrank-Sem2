//Given an integer number and two divisors d1 and d2
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(x%y==0 && x%z==0){
        printf("Yes.");
    }
    else{
        printf("No.");
    }
    return 0;
}
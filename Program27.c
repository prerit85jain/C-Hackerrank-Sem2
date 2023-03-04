//This program will read value of N and print all Leap Years from 1 to N years. There are two conditions for leap year:
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int y;
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        if(i%4==0 && (i%100!=0 || i%400==0)){
            printf("%d ",i);
        }
    }
    return 0;
}

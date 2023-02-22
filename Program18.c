//This program will read month value and print total number of days in input month.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m;
    scanf("%d",&m);
    if(m==1 || m==3 || m==5 || m==7||m==8|| m==10 || m==12){
        printf("%d",31);
    }
    else if(m==4 || m==6|| m== 9|| m==11){
        printf("%d",30);
    }
    else if(m==2){
        printf("%d",28);
    }
    else{
        printf("Wrong month value.");
    }
    return 0;
}

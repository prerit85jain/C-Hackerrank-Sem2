//You are given a time in format HH and MM. You have to print Good Morning,Good AfterNoon,Good Evening,Good Night according to time.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int h,m;
    scanf("%d%d",&h,&m);
    if(h>=4 && h<=11){
        printf("Good Morning");
    }
    else if(h>=12 && h<=15){
        printf("Good AfterNoon");
    }
    else if(h>=16 && h<=21){
        printf("Good Evening");
    }
    else if (h>=22 || (h>=1 && h<=3))
    {
        printf("Good Night");
    }
    return 0;
}

//You have a uncle who daily gives you D chocolates upto N days. Also you have C chocolates already but your parents allow only to eat one chocolate per day. Calculate the total chocolates at the end of N days.
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int c,n,d;
    scanf("%d%d%d",&c,&n,&d);
    int total_chocolates=c+(n*d);
    printf("%d", total_chocolates-n);
    return 0;
}
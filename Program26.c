//It is given that name contains five characters. You are given ASCII value of each character separated by &. Now you have to decode it and find that Funny name.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c,d,e;
    scanf("%d&%d&%d&%d&%d",&a,&b,&c,&d,&e);
    printf("%c%c%c%c%c",a,b,c,d,e);
    return 0;
}

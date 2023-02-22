//Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,a1,a2,a3;
    scanf("%d",&t);
    while(t>0){
        scanf("%d%d%d",&a1,&a2,&a3);
        if((a1+a2+a3)==180){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        t--;
    }
    return 0;
}

//This program will read a character from user and check whether it is VOWEL or CONSONANT
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char x;
    scanf("%c",&x);
    if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U'||x=='a'||x=='e'||x=='i'||x=='o'||x=='u'){
        printf("Vowel.");
    }
    else if (x>='A'&&x<='z'){
        printf("Consonant.");
    }
    else{
        printf("Not an alphabet.");
    }
    return 0;
}
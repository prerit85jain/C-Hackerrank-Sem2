//Your exams are near and you have to prepare for that. You are given N days left for your exams in which you have to prepare S subjects each having C chapters. Each chapter takes H hour to prepare. Goa trip is before exams and it is L days long trip during which you cannot study. You want to go Goa so you are ready to study T hours daily. You have to calculate and find whether or not you can go Goa. If you can go Goa, print Goa Jaayenge otherwise print Padhai Karenge.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int d,s,c,h,l,t;
    scanf("%d%d%d%d%d%d",&d,&s,&c,&h,&l,&t);
    int syllabus_time = s*c*h;
    int study_days_after = d-l;
    int remain_study_time = study_days_after*t;
    if(remain_study_time >= syllabus_time){
        printf("Goa Jaayenge");
    }
    else{
        printf("Padhai Karenge");
    }
    return 0;
}

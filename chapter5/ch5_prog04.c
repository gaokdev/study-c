// cm로 표현된 키를 입력하여 피트와 인치로 변환하는 프로그램
// 1피트는 12인치이고 1인치는 2.54cm이다

#include <stdio.h>

int main()
{
    double cm;
    double inch;
    int feet;

    printf("키를 입력하시오(cm): ");
    scanf("%lf", &cm);

    inch = cm / 2.54; // 전체가 몇 인치인지 구하기
    feet = inch / 12; // 피트 부분 구하기
    inch = inch - (feet * 12); // 피트 이외의 인치로 나타낼 부분 구하기

    printf("%.2fcm는 %d피트 %.2f인치입니다.\n",cm, feet, inch);
    
    return 0;
}
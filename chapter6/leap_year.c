// 윤년 판단 프로그램
// 연도가 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않는다
// 400으로 나누어 떨어진다
// 관계 연산자가 논리 연산자보다 우선 순위가 높다

#include <stdio.h>

int main()
{
    int leap_year;

    printf("연도를 입력하시오: ");
    scanf("%d", &leap_year);

    if (((leap_year % 4 == 0 ) && (leap_year % 100 != 0)) || (leap_year % 400 == 0))
        printf("%d년은 윤년입니다.\n", leap_year);
    else
        printf("%d년은 윤년이 아닙니다.\n", leap_year);

    return 0;
    
}
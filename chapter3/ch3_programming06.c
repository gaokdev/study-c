// 달의 중력은 지구의 약 17%라고 한다
// 자신의 몸무게를 입력받아서 달에서의 몸무게를 계산하는 프로그램
// double형으로 계산

#include <stdio.h>

int main()
{
    double weight_on_earth;
    double weight_on_moon;
    
    printf("몸무게를 입력하시오(단위: kg): ");
    scanf("%lf", &weight_on_earth);

    weight_on_moon = 0.17 * weight_on_earth;

    printf("달에서의 몸무게는 %.2lfkg입니다", weight_on_moon);

    return 0;
}
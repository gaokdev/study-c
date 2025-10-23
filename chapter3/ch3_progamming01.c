// 연봉을 한 푼도 쓰지 않고 몇 년 동안 모아야 10억이 될까?
// 연봉을 입력하고, 10억을 연봉으로 나누어서 출력해보자. 소수점 2자리까지만 출력한다.

#include <stdio.h>

int main()
{
    float salary; // 나눌 때 소수점 계산을 해야 하므로 float로 선언
    float years;

    printf("연봉을 입력하시오(단위 : 만원): ");
    scanf("%f", &salary);

    years = 100000 / salary; // 만약 salary가 int로 선언되었다면 years에 저장되는 값은 16.0
    printf("10억을 모으는데 걸리는 시간(단위 : 년): %.2f",years); // 소수점 2자리까지만 출력

    return 0;
}
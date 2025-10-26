// 물리학에서 운동에너지는 E = (mv^2)/2.0으로 계산된다
// 사용자로부터 질량(m)과 속도(v)를 받아서 운동에너지(E)를 계산하는 프로그램
// 모든 변수는 double형을 사용

#include <stdio.h>

int main()
{
    double m; // 질량
    double v; // 속도
    double e; // 운동에너지

    printf("질량(kg): ");
    scanf("%lf", &m);

    printf("속도(m/s): ");
    scanf("%lf", &v);

    e = m * v * v * 0.5; // 운동에너지 구하기

    printf("운동에너지(J): %f\n", e);

    return 0;
}
// 구의 표면적과 체적을 구하는 프로그램
// 구의 반지름은 실수로 입력된다
// 아래의 공식을 사용하고 파이값은 기호 상수를 사용하여 정의
// A = 4*(pi)*r^2
// A = (4/3)*(pi)*r^3

#include <stdio.h>

int main()
{
    double r, area, vol;
    const double PI = 3.141592;

    printf("반지름을 입력하시오: ");
    scanf("%lf", &r); // scanf()함수에서 주소 연산자 & 누락시키지마라!!!!!!!!!!

    area = 4.0 * PI * r * r;
    vol = (4.0/3.0) * PI * r * r * r;

    printf("표면적은 %.2f입니다. \n", area);
    printf("체적은 %.2f입니다. \n", vol);
    
    return 0;
}
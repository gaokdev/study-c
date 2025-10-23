// 평균 계산하기 프로그램

#include <stdio.h>

int main()
{
    double num1, num2, num3;
    double sum, avg;

    printf("3개의 실수를 입력하시오: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    avg = sum/3;

    printf("합계=%.2lf\n",sum); // %.2lf는 소수점 둘쨰 자리까지 출력
    printf("평균=%.2lf",avg);

    return 0;
}
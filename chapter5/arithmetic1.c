// 실수와 실수 간의 사칙연산 프로그램

#include <stdio.h>

int main()
{
    double x, y, result;

    printf("실수 2개를 입력하시오: ");
    scanf("%lf %lf", &x, &y); // double 형일 경우 scanf() 형식 지정자는 %lf
    
    result = x + y; // 덧셈 연산
    printf("%f + %f = %f\n", x, y, result);

    result = x - y; // 뺄셈 연산
    printf("%f - %f = %f\n", x, y, result);

    result = x * y; // 곱셈 연산
    printf("%f * %f = %f\n", x, y, result);

    result = x / y; // 나눗셈 연산
    printf("%f / %f = %f\n", x, y, result);

    return 0;
    
}
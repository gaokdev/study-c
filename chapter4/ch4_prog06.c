// 다음과 같은 수식의 값을 계산하여 화면에 출력하는 프로그램
// 지수 표기법을 사용하여 변수들을 초기화
// 3.32 x 10^(-3) + 9.76 x 10^(-8)

#include <stdio.h>

int main()
{
    double num1 = 3.32e-3; // 지수 표기법을 사용하여 초기화
    double num2 = 9.76e-8;
    double result = 0;

    result = num1 + num2;

    printf("%f\n", result);

    return 0;
}
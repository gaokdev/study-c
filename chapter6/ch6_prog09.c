// 다음과 같이 정의되는 함수의 함수값을 계산하여보자
// 사용자로부터 x값을 입력받아서 함수값을 계산하여 화면에 출력
// x는 실수

// f(x) x<=0일때 x^2 - 9x + 2
// x >0일때 7x + 2

#include <stdio.h>

int main()
{
    double x;
    double result;

    printf("x의 값을 입력하시오: ");
    scanf("%lf", &x);

    if (x <= 0)
        result = x * x - 9.0 * x + 2;
    else
        result = 7.0 * x + 2;
    
    printf("f(%.2f)의 값은 %.2f입니다.\n", x, result);

    return 0;
}
// 다항식 3x^2 + 7x + 11의 값을 계산하는 프로그램
// x의 값은 실수로 사용자에게 입력받는다

#include <stdio.h>

int main()
{
    float x;
    float result;

    printf("실수를 입력하시오: ");
    scanf("%f", &x);

    result = 3*x*x + 7*x + 11;

    printf("다항식의 값은 %.2f",result);

    return 0;
}
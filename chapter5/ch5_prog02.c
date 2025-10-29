// 2개의 double 형의 실수를 읽어서 합, 차, 곱, 몫을 구하는 프로그램

#include <stdio.h>

int main()
{
    double num1, num2;

    printf("실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);

    printf("%.2f ", num1 + num2);
    printf("%.2f ", num1 - num2);
    printf("%.2f ", num1 * num2);
    printf("%.2f \n", num1 / num2);

    return 0;

}
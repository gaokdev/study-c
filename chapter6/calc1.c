// 산술 계산기 프로그램

#include <stdio.h>

int main()
{
    double x,y;
    char operator;
    double result = 0;
    int error_flag = 0;

    printf("수식을 입력하시오(ex : 2 + 5): ");
    scanf("%lf %c %lf", &x, &operator, &y);

    if (operator == '+')
        result = x + y;

    else if (operator == '-')
        result = x - y;

    else if (operator == '*')
        result = x * y;

    else if (operator == '/')
        if (y != 0)
            result = x / y;
        else {
            printf("0으로 나눌 수 없습니다.\n");
            error_flag = 1;
        }

    else if (operator == '%') {
        if (y != 0) {
            if (x == (int)x && y == (int)y) // 나머지 연산을 위해 정수인지 확인
                result = (int)x % (int)y;
            else {
                printf("실수는 나머지 연산을 지원하지 않습니다.\n");
                error_flag = 1;
            }
        }
        else {
            printf("0으로 나눌 수 없습니다.\n");
            error_flag = 1;
        }
    }
    else {
        printf("지원하지 않는 연산자 입니다.\n");
        error_flag = 1;
    }

    if (error_flag != 1)
        printf("%.2f %c %.2f = %.2f\n", x, operator, y, result);

    return 0;
}
// 산술 계산기 switch 버전

#include <stdio.h>

int main()
{
    double x, y;
    char operator;
    double result;
    int error_flag = 0;

    printf("수식을 입력하시오(ex : 2 + 5): ");
    scanf("%lf %c %lf", &x, &operator, &y);

    switch (operator) {
        case '+':
            result = x + y;
            break;
        case '-':
            result = x - y;
            break;
        case '*':
            result = x * y;
            break;
        case '/':
            if (y != 0.0)
                result = x / y;
            else {
                printf("0으로 나눌 수 없습니다.\n");
                error_flag = 1;
            }
            break;
        case '%':
            if (y != 0.0) {
                if (x == (int)x && y == (int)y)
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
            break;
        default:
            printf("지원하지 않는 연산자입니다.\n");
            error_flag = 1;
            break;
    }
    
    if (error_flag != 1)
        printf("%.2f %c %.2f = %.2f\n", x, operator, y, result);
    
    return 0;
}
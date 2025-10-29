// 연산자 우선순위와 결합 규칙 예제

#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    int result;

    result = 2 > 3 || 6 > 7; // 관계 > 논리 이므로 0 || 0, 결과는 0
    printf("%d\n", result);

    result = 2 || 3 && 3 > 2; // 관계 > 논리 이므로 2 || 3 && 1, && > || 이므로 2 || 1, 결과는 1
    printf("%d\n", result);

    result = x = y = 1; // 대입 연산자는 right to left, 결과는 1
    printf("%d\n", result);

    result = - ++x + y--; // 후위 > 전위 > 부호, 결과는 -1. 후위 연산자 결합 우선순위가 높다고 하여 실행 시점이 빠르다는 것은 아니다
    printf("%d\n", result);

    return 0;
}
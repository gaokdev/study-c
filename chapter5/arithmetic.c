// 정수와 정수 간의 사칙 연산 프로그램

#include <stdio.h>

int main()
{
    int x, y, result;

    printf("정수 2개를 입력하시오: "); // 정수 2개를 입력받기
    scanf("%d %d", &x, &y); // 두 수를 한꺼번에 입력받기 위해서 형식 지정자 2개 써주기

    result = x + y; // 덧셈 연산
    printf("%d + %d = %d\n", x, y, result);

    result = x - y; // 뺄셈 연산
    printf("%d - %d = %d\n", x, y, result);

    result = x * y; // 곱셈 연산
    printf("%d * %d = %d\n", x, y, result);

    result = x / y; // 나눗셈 연산
    printf("%d / %d = %d\n", x, y, result); // 정수와 정수 나눗셈을 하면은 소수점 이하는 버려진다

    result = x % y; // 나머지 연삱
    printf("%d %% %d = %d\n", x, y, result); // %를 출력하기 위해서는 printf() 함수 내에서 %%를 작성해야한다

    return 0;
}
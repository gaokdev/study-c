// 나머지 연산자 프로그램

#include <stdio.h>
#define SEC_PER_MINUTE 60 // 기호 상수 선언, main()함수 내에서 const int 등으로 선언도 가능

int main()
{
    int input, minute, second;

    printf("초를 입력하시오: ");
    scanf("%d", &input);

    minute = input / SEC_PER_MINUTE; // 분 단위 계산
    second = input % SEC_PER_MINUTE; // 나머지로 초 계산

    printf("%d초는 %d분 %d초입니다. \n", input, minute, second);
    return 0;
}
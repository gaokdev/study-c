// 2의 보수 프로그램

#include <stdio.h>

int main()
{
    int x = 3;
    int z = 13;
    int y = -3;


    printf("x = %08X\n", x); // 16진수 출력은 %x or %X, 소문자 대문자 구분
    printf("y = %08X\n", y); // %08X는 16진수, 필드폭 8, 공백은 0 넣기
    printf("x+y = %08X\n", x+y);

    return 0;
}
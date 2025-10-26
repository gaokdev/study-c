// 오버플로우 예제

#include <stdio.h>
#include <limits.h> // SHRT_MAX, USHRT_MAX를 사용하기 위해 포함시킨 헤더파일

int main()
{
    short s_money = SHRT_MAX; // 최대값으로 초기화한다. 32767
    unsigned short u_money = USHRT_MAX; // 최대값으로 초기화한다. 65535

    s_money = s_money + 1; // 오버플로우 발생
    printf("s_money = %d\n", s_money);

    u_money = u_money + 1; // 오버플로우 발생
    printf("u_money = %d\n", u_money);

    return 0;
}

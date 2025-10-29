// 형변환 예제 프로그램

#include <stdio.h>

int main()
{
    char c;
    int i;
    float f;

    c = 10000; // int -> char이 되어 일부의 값이 잘린다
    i = 1.23456 + 10; // double -> int가 되어 소수점 이하가 사라진다
    f = 10 + 20; // int -> float가 되어 f는 30.0이 된다
    printf("c = %d, i = %d, f = %f \n", c, i, f);

    return 0;
}
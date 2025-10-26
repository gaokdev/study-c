// sizeof()로 자료형의 크기를 알아보는 프로그램
// sizeof()는 byte 단위로 출력된다

#include <stdio.h>

int main()
{
    int x;
    printf("변수 x의 크기 : %d\n", sizeof(x)); // 변수의 크기를 반환

    printf("char형의 크기 : %d\n", sizeof(char)); // 자료형의 크기를 반환
    printf("int형의 크기 : %d\n", sizeof(int));
    printf("short형의 크기 : %d\n", sizeof(short));
    printf("long형의 크기 : %d\n", sizeof(long));
    printf("long long형의 크기 : %d\n", sizeof(long long));
    printf("float형의 크기 : %d\n", sizeof(float));
    printf("double형의 크기 : %d\n", sizeof(double));

    return 0;
}
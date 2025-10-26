// 정수 자료형을 사용하는 프로그램

#include <stdio.h>

int main()
{
    short year = 0; // short형 변수 선언
    int sale = 0; // int형 변수 선언
    long total_sale = 0; // long형 변수 선언
    long long large_value; // long long형 변수 선언

    year = 10; // 약 3만2천을 넘지 않도록 주의 (자료형이 short)
    sale = 200000000; // 약 21억을 넘지 않도록 주의 (자료형이 int)
    total_sale = year * sale; // 약 21억을 넘지 않도록 주의 (자료형이 long)

    printf("total_sale = %d \n", total_sale);


    return 0;
}
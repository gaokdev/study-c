// 사용자로부터 하나의 실수를 입력받아서 소수점 표기 방법과 지수 표기 방법으로 동시에 출력하는 프로그램

#include <stdio.h>

int main()
{
    double num;

    printf("실수를 입력하시오: ");
    scanf("%lf", &num);

    printf("실수형식으로는 %f입니다\n", num);
    printf("지수형식으로는 %e입니다\n", num);

    return 0;
}
// 3개의 정수값을 입력받아서 3개의 정수값 중에서 최대값을 출력하는 프로그램

#include <stdio.h>

int main()
{
    int a,b,c;
    int max;

    printf("정수 3개를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    max = (max > b) ? max : b;
    max = (max > c) ? max : c;

    printf("최대값은 %d입니다.\n", max);

    return 0;
}
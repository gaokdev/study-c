// 미국에서는 거리를 표시하는데 마일을 사용한다. 마일을 미터로 환산하는 프로그램
// 사용자로부터 마일단위로 거리를 입력 받아서 변수에 저장한다. 이 변수에 1609를 곱하여 미터로 변환한다
// 미터로 변환된 값을 화면에 출력한다. 실수값을 사용한다.

#include <stdio.h>

int main()
{
    float meter;
    float mile;

    printf("마일을 입력하시오: ");
    scanf("%f", &mile);

    meter = mile * 1609;

    printf("%.1f 마일은 %.2f미터입니다.", mile, meter); // %.1f, %.2f 등으로 필드 크기 결정

    return 0;
}
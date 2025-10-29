// 약 2200 년 전에 그리스의 에라토스테네스는 최초로 지구의 크기를 측정
// 인단 지구를 구형으로 가정하고 또 태양 광선은 지구의 어느 곳에서나 평행하게 비친다고 가정
// 원호의 길이는 중심각에 비례한다는 원리 사용
// 정오에 시에네에서 햇빛이 수직으로 비칠 때, 알렉산드리아에서는 막대와 그림자가 이루는 각도가 7.2도로 측정되었다
// 시에네에서 알렉산드리아까지의 거리는 약 900km이고 이것을 이용하여 지구의 반지름을 계산하는 프로그램

// 작은 각도랑 전체 원의 각도랑 비례 공식을 세웠음
// angle : distance = 360 : 2 * pi * radius
// radius = 360 * distance / angle / 2

#include <stdio.h>

int main()
{
    double distance, angle, radius;
    const double PI = 3.141592;

    printf("거리를 입력하시오: ");
    scanf("%lf", &distance);

    printf("각도를 입력하시오: ");
    scanf("%lf", &angle);

    radius = 360 * distance / angle / PI / 2;
    
    
    printf("지구의 반지름은 %.2f입니다.\n", radius);

    return 0;
}


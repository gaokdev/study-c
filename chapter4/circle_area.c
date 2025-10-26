// 원의 면적을 계산하는 프로그램

#include <stdio.h>

int main()
{
    double radius; // 원의 반지름
    double area ; // 원의 면적

    printf("원의 반지름: ");
    scanf("%lf",&radius);

    area = 3.141592 * radius * radius; // 3.141592는 상수
    
    printf("원의 면적: %f \n", area);

    return 0;
}
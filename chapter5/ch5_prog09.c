// 그리스 최초의 수학자이자 천문학자인 탈레스는 지팡이 하나로 피라미드의 높이를 재었다고 한다
// 탈레스는 지팡이를 똑바로 땅에 세우고 지팡이를 움직여서 지팡이의 그림자와 피라미드의 그림자를 일치시켰다
// 삼각형 ABC와 삼각형 ADE는 닮은꼴이므로 다음의 수식이 성립한다
// AC : AE = BC : DE
// 따라서 AC와 AE, BC를 안다면 DE를 계산할 수 있다. AC와 AE, BC를 입력하여서 DE를 구하는 프로그램
// 입력은 모두 실수

#include <stdio.h>

int main()
{
    double stick_height, stick_shadow, shadow_pyramid_distance, pyramid_height;

    printf("지팡이의 높이를 입력하시오: ");
    scanf("%lf", &stick_height);

    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf("%lf", &stick_shadow);
    
    printf("피라미드까지의 거리를 입력하시오: ");
    scanf("%lf", &shadow_pyramid_distance);
    
    pyramid_height = shadow_pyramid_distance * stick_height / stick_shadow;

    printf("피라미드의 높이는 %f입니다.\n", pyramid_height);

    return 0;
}
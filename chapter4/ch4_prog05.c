// 우리나라에서 많이 사용되는 면적의 단위인 평을 제곱미터로 환산하는 프로그램
// 1평은 3.3m^2이다
// 변수들의 자료형은 어떤 것을 선택하는 것이 좋은가? 기호 상수를 이용하여 1평당 제곱미터를 나타내어라

#include <stdio.h>
#define SQUAREMETER_PER_PYEONG 3.3058 // 기호 상수로 나타내기. const double squaremeter_per_pyeong = 3.3058; 로 사용해도됨.

int main()
{
    double pyeong;
    double square_meter;

    printf("평을 입력하세요: ");
    scanf("%lf", &pyeong);

    square_meter = SQUAREMETER_PER_PYEONG * pyeong;

    printf("%f평방미터입니다.", square_meter);

    return 0;

}
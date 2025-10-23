// 사용자로부터 삼각형의 높이와 밑변을 받아서 넓이를 계산하여 출력하는 프로그램
// 모든 데이터는 실수로 입력되며 출력도 모두 실수형으로

#include <stdio.h>

int main()
{
    float b;
    float h;
    float area;

    printf("삼각형의 밑변: ");
    scanf("%f", &b);

    printf("삼각형의 높이: ");
    scanf("%f", &h);

    area = b * h / 2;

    printf("삼각형의 넓이 : %.2f", area); // %.2f 등으로 필드폭(width) 지정

    return 0;
}
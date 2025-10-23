// 사각형의 둘레와 면적을 구하는 프로그램

#include <stdio.h>

int main()
{
    double w, h, area, perimeter;

    printf("사각형의 가로 길이를 입력하세요: ");
    scanf("%lf", &w);

    printf("사각형의 세로 길이를 입력하세요: ");
    scanf("%lf", &h);

    area = w * h;
    perimeter = 2 * (w+h);

    printf("사각형의 넓이: %lf\n", area);
    printf("사각형의 둘레: %lf", perimeter);

    return 0;
}
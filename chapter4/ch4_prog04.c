// 상자의 부피를 구하는 프로그램
// 부피는 길이 * 너비 * 높이로 계산
// 길이, 너비, 높이는 모두 double형의 실수로 입력받기

#include <stdio.h>

int main()
{
    double length; // 세로
    double width; // 가로
    double height; // 높이
    double volume; // 부피

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &width, &length, &height);

    volume = width * length * height; // 부피 연산

    printf("상자의 부피는 %f입니다", volume); // 부피를 출력

    return 0;

}
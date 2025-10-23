// 원의 면적 구하기 프로그램

#include <stdio.h>

int main()
{
    float radius;
    float area;

    printf("원의 반지름을 입력하세요: ");
    scanf("%f", &radius); // scanf() 함수에서 float type의 변수에 값을 저장하니까 형식 지정자 %f 사용. 그리고 주소를 나타내는 &사용

    area = radius * radius * 3.14;
    printf("원의 면적 : %f", area); // printf() 함수에서도 마찬가지로 float type의 값을 출력하므로 형식 지정자 %f 사용

    return 0;
}
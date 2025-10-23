// 섭씨 온도와 화씨 온도는 다음과 같은 수식을 만족한다
// 사용자로부터 화씨 온도를 받아서 섭씨온도로 환산하여 출력하는 프로그램
// 온도는 실수형으로 처리
// C = 5/9 * (F-32)

#include <stdio.h>

int main()
{
    float c;
    float f;

    printf("화씨값을 입력하시오: ");
    scanf("%f", &f);

    c = 5/9 * (f-32);

    printf("섭씨값은 %.2f도 입니다.",c);

    return 0;
}
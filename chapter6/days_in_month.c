/* 각 달의 일수를 출력하는 프로그램
달이 주어지면 그 달의 일수를 출력한다
여러 가지 방법으로 작성할 수 있겠으나 여기서는 switch문을 사용
대부분의 달이 31 또는 30일인 점을 고려하여 break를 생략하는 기법을 사용 */

#include <stdio.h>

int main()
{
    int month;
    int days;

    printf("일수를 알고 싶은 달을 입력하시오: ");
    scanf("%d", &month);

    switch (month) {
        case 2:
            days = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }
    printf("%d월의 일수는 %d일 입니다.\n", month, days);
    return 0;
}

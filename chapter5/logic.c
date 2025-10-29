// 사용자로부터 정수를 받아서 논리 연산을 한 후에 결과를 출력하는 프로그램

#include <stdio.h>

int main()
{
    int x, y;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("%d && %d의 결과값: %d\n", x,y,x&&y); // AND연산 : 좌우가 모두 참이어야 참
    printf("%d || %d의 결과값: %d\n", x,y,x||y); // OR연산 : 좌우 둘중 하나라도 참이면 참
    printf("!%d의 결과값: %d\n", x, !x); // NOT연산 : 0이 아닌 모든 수를 1로, 0을 1로 바꿈

    return 0;
}
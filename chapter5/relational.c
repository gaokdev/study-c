// 사용자로부터 두 개의 정수를 받아서 관계 연산자를 적용하고 그 결과를 출력하는 프로그램

#include <stdio.h>

int main()
{
    int x, y;

    printf("두개의 정수를 입력하시오: ");
    scanf("%d %d", &x, &y);

    printf("x == y의 결과값: %d\n", x==y);
    printf("x != y의 결과값: %d\n", x!=y);
    printf("x > y의 결과값: %d\n", x>y);
    printf("x < y의 결과값: %d\n", x<y);
    printf("x >= y의 결과값: %d\n", x>=y);
    printf("x <= y의 결과값: %d\n", x<=y);

    return 0;
}
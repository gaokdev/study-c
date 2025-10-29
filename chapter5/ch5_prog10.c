// 조건 연산자 ?만을 이용하여 2차원 공간의 x 좌표와 y 좌표를 입력받아서 그 좌표가 속하는 사분면을 출력하는 프로그램
// (x>0 && y>0) ? printf("1사분면") : printf(" ");와 같은 문장을 사용하여 작성

#include <stdio.h>

int main()
{
    double x,y;

    printf("x 좌표를 입력하시오: ");
    scanf("%lf", &x);

    printf("y 좌표를 입력하시오: ");
    scanf("%lf", &y);

    (x > 0 && y > 0) ? (printf("1사분면입니다.\n")) : (printf(""));
    (x < 0 && y > 0) ? (printf("2사분면입니다.\n")) : (printf(""));
    (x < 0 && y < 0) ? (printf("3사분면입니다.\n")) : (printf(""));
    (x > 0 && y < 0) ? (printf("4사분면입니다.\n")) : (printf(""));
    printf("축 또는 원점에 있습니다. \n");
    
    return 0;
}
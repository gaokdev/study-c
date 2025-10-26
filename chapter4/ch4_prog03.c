// int형의 변수 x와 y의 값을 서로 교환하는 프로그램
// 별도의 변수가 필요하면 정의하여 사용. 변수 x와 y는 10, 20으로 초기화

#include <stdio.h>

int main()
{
    int x = 10;
    int y = 20;
    int temp;

    printf("%d %d\n", x,y);

    temp = x;
    x = y;
    y = temp;

    printf("%d %d\n", x,y);
    
    return 0;
}
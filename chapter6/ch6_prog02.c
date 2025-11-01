// 사용자로부터 3개의 정수를 읽어 들인 후에 if-else 문을 사용하여 가장 작은 값을 결정하는 프로그램

#include <stdio.h>

int main()
{
    int a, b, c;
    int min = 0;

    printf("3개의 정수를 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    min = a;

    if (min > b)
        min = b;
    
    if (min > c)
        min = c;

    printf("가장 작은 값은 %d입니다.\n",min);

    return 0;
}

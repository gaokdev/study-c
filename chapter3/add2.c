// 사용자로부터 입력받은 2개의 정수의 합을 계산하여 출력

#include <stdio.h>

int main()
{
    int x;
    int y;
    int sum;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &x);
    
    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &y);

    sum = x + y;
    printf("두수의 합: %d", sum);

    return 0;
    
}
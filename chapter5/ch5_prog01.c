// 사용자로부터 2개의 정수를 입력받아서 첫 번째 정수를 두 번째 정수로 나누었을 때 얻게 되는 몫과 나머지를 출력하는 프로그램

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("정수 2개를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    printf("몫: %d\n", num1 / num2);
    printf("나머지 : %d\n", num1 % num2);

    return 0;
}
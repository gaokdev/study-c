// 100보다 작은 정수를 입력받아서 이것을 십의 자리, 일의 자리로 분리하여 출력하는 프로그램
// 사용자가 정수 23을 입력하면 2, 3을 차례로 출력

#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    printf("십의 자리: %d \n", num/10);
    printf("일의 자리: %d \n", num%10);

    return 0;
}
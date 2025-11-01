// 키보드에서 입력받은 정수의 절대값을 구한다
// 절대값을 구하는 가장 간단한 방법은 정수가 0보다 작은 경우, -부호 연산자를 적용싴며서 부호를 반전시키는 것이다
// 따라서 if문을 사용할 수 있다

#include <stdio.h>

int main()
{
    int num, absolute_num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    absolute_num = num;
    if (absolute_num < 0) // 조건 확인
        absolute_num = -absolute_num; // 음수일 경우 부호 반전
    
    printf("절대값은 %d입니다. \n", absolute_num); // 절대값 출력
    return 0;
}
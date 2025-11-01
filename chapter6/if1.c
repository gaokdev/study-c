// 키보드에서 입력받은 정수가 양수인지를 말해주는 프로그램
// 사용자로부터 입력받은 수를 if문을 이용하여 검사

#include <stdio.h>

int main()
{
    int num;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    if (num > 0) // 조건식을 포함한 if문
        printf("양수입니다.\n"); // 조건식이 참이라면 실행

    printf("입력된 값은 %d입니다. \n", num);

    return 0;
}
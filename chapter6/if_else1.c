// 키보드에서 입력받은 정수가 홀수인지 짝수인지를 말해주는 프로그램

#include <stdio.h>

int main()
{
    int num;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &num);


    if (num % 2 == 0)
        printf("짝수 입니다.\n");
    else
        printf("홀수 입니다.\n");    
    
    return 0;
}
// 사용자로부터 정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력하는 프로그램

#include <stdio.h>

int main()
{
    int num;

    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &num); // 16진수 정수로 입력받기

    printf("8진수로는 %#o입니다\n", num); // 8진수 앞에 0을 붙여서 출력하려면 %#o
    printf("10진수로는 %d입니다\n", num);
    printf("16진수로는 %#x입니다\n", num); // 16진수 앞에 0x를 붙여서 출력하려면 %#x
    
    return 0;
}
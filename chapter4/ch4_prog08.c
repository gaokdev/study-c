// 사용자가 아스키 코드값을 입력하면 그 아스키 코드값에 해당하는 문자를 출력하는 프로그램

#include <stdio.h>

int main()
{
    int ascii_code;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &ascii_code);

    printf("문자:%c입니다\n", ascii_code);

    return 0;
}

// 아스키 코드 쓴다고 char으로 변수선언하거나 scanf에서 %c로 받으면 안된다!! 만약 그렇게 하고 실행하여 65를 입력한다고 하면 %c는 하나만 가져가니까 6만 저장하여 문제가 발생한다!

// int로 변수 선언 하고 scanf에서 %d로 받은 뒤에 printf에서 %c로 출력해주면은 자동적으로 아스키 코드를 출력해준다
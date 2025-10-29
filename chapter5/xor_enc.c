// XOR을 이용한 암호화 프로그램

#include <stdio.h>

int main()
{
    char pw; // 사용자에게서 입력받는 비밀번호
    char key = 0xf; // 암호화를 위한 키 만들기
    char enc, dec; // 암호화 / 복호화 변수

    printf("암호화 할 문자: ");
    scanf("%c", &pw);

    enc = pw ^ key; // 암호화
    printf("암호화 된 문자 : %c \n", enc);

    dec = enc ^ key; // 복호화
    printf("복원된 문자 : %c\n", dec);

    return 0;
}
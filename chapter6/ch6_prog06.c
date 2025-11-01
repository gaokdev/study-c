// 키보드에서 하나의 문자를 읽어서 모음과 자음을 구분하는 프로그램 (switch문 사용)

#include <stdio.h>

int main()
{
    char x;

    printf("하나의 문자를 입력하시오: ");
    scanf("%c", &x); // getchar()함수를 사용할 수 있다

    if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x >= 'z')) { // 대문자 A-Z, 소문자 a-z 까지 범위인지 확인
        switch (x) {
            case 'A': case 'E': case 'I': case 'O': case 'U': case 'a': case 'e': case 'i': case 'o': case 'u':
                printf("모음입니다.\n");
                break;
            default :
                printf("자음입니다.\n");
                break;
        }
    }
    else
        printf("잘못된 입력입니다.\n");

    return 0;
}
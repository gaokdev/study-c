// 'a'+ 1,'a'+ 2,'a'+ 3을 문자 형식(%c)로 출력하는 프로그램
// 무엇을 알 수 있는가? -> 아스키 코드는 문자 순서대로 나열되어 있음을 알 수 있다

#include <stdio.h>

int main()
{
    char a = 'a';
    
    printf("%c %c %c\n", a+1, a+2, a+3);
    
    return 0;
}
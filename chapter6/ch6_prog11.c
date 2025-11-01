// 사용자로부터 하나의 문자를 입력받아서 문자가 'R'이나 'r'이면 "Rectangle"이라고 출력
// 'T'이거나 't'이면 "Triangle", 'C'이거나 'c'이면 "Circle"이라고 출력하는 프로그램
// 그 이외의 문자가 들어오면 "Unknown"이라고 출력
// 문자를 입력받을 때에는 getchar()을 사용

#include <stdio.h>

int main()
{
    char x;

    printf("문자를 입력하시오: ");
    x = getchar();

    switch (x) {
        case 'R':
        case 'r':
            printf("Rectangle\n");
            break;
        case 'T':
        case 't':
            printf("Triangle\n");
            break;
        case 'C':
        case 'c':
            printf("Circle\n");
            break;
        default :
            printf("Unknown\n");
    }    
    return 0;
}
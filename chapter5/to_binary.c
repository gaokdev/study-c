// 십진수를 이진수 형식으로 출력하는 프로그램
// 반복문 없이 비트 연산자를 이용하여 128보다 작은 십진수를 이진수 형식으로 화면에 출력

#include <stdio.h>

int main()
{
    int x;

    printf("십진수: ");
    scanf("%d", &x);

    printf("이진수: ");
    
    int shift = 7;
    printf("%d", (x >> shift--) & 0x1); // 오른쪽으로 7비트 이동시켜서 8번째 최상위 비트를 추출
    printf("%d", (x >> shift--) & 0x1); // 오른쪽으로 6비트 이동시켜서 7번째 비트를 추출
    printf("%d", (x >> shift--) & 0x1);
    printf("%d", (x >> shift--) & 0x1);
    printf("%d", (x >> shift--) & 0x1);
    printf("%d", (x >> shift--) & 0x1);
    printf("%d", (x >> shift--) & 0x1);
    printf("%d", x & 0x1); // 마지막 최하위 비트를 추출

    return 0;
}
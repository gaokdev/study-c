#include <stdio.h>

int main()
{
    // 4바이트 정수 선언 및 초기화
    int x = 0;
    int y = 259;
    int z = 3;

    // y의 값: 259 (십진수) = 0x0103 (16진수)
    
    printf("1. 주소 및 값 확인:\n");
    printf("y 값: %d 16진수(0x%X)\n", y, y); 
    printf("x 위치: %p\n", &x);
    printf("y 위치: %p\n", &y); 
    printf("z 위치: %p\n", &z); 

    // y의 주소 + 1 (바이트 단위)
    int *p_addr = (int *)((char *)&y + 1); // (char *)&y + 1 : 주소를 1바이트 크기로 본 다음에 +1을 더하고 다시 4바이트 포인터로

    printf("\n");
    printf("2. 오프셋 접근 결과:\n");
    printf("p_addr 포인터 주소: %p\n", p_addr);
    printf("*p_addr 값 (16진수): %x\n", *p_addr); 
    
    return 0;
}
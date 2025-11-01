// 2자리 숫자로 이루어진 복권이 있다
// 사용자가 가지고 있는 복권 번호가 2자리 모두 일치하면 100만원을 받는다
// 2자리 중에서 하나만 일치하면 50만원을 받는다
// 하나도 일치하지 않으면 상금은 없다
// 복권 당첨 번호는 난수로 생성하고 사용자의 입력에 따라서 상금이 얼마인지를 출력하는 프로그램

#include <stdio.h>
#include <time.h> // srand()에 시드로 현재시간을 주려고 time()함수를 사용하기 위해 포함시킨 헤더파일
#include <stdlib.h> // srand(), rand()함수를 사용하기 위해 포함시킨 헤더파일

int main()
{
    int num, num_1, num_2;
    int win, win_1, win_2;
    int match_count = 0;
    
    srand((unsigned int)time(NULL)); // 난수 함수에 현재 시간을 시드로 줘서 프로그램 실행 시 마다 새로운 난수가 생성되도록 함

    printf("복권 번호를 입력하시오(10에서 99사이): ");
    scanf("%d", &num);

    if (num < 10 || num > 99) {
        printf("잘못된 입력입니다.\n");
        return 0;
    }

    num_1 = num / 10; // 사용자 번호 10의 자리 수 구하기
    num_2 = num % 10; // 사용자 번호 1의 자리 수 구하기

    win = 10 + (rand() % 90); // 10 ~ 99사이의 난수를 생성
    win_1 = win / 10;
    win_2 = win % 10;

    if (num_1 == win_1) // 10의 자리 확인
        match_count++; // 카운트 올리기
    if (num_2 == win_2) // 1의 자리 확인
        match_count++; // 카운트 올리기
    
    printf("당첨번호는 %d입니다.\n",win);
    
    if (match_count != 0)
        printf("상금은 %d만원 입니다.\n", match_count * 50); // 카운트와 50을 곱해서 상금을 출력하기
    else
        printf("상금은 없습니다.\n");

    return 0;
}
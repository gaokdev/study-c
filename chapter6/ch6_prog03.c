// 컴퓨터와 가위, 바위, 보 게임을 하는 프로그램
// 컴퓨터는 사용자에게 알리지 않고 가위, 바위, 보 중에서 임의로 하나를 선택
// 사용자는 프로그램의 입력 안낸 메시지에 따라서, 3개 중에서 하나를 선택
// 사용자의 선택이 끝나면 컴퓨터는 누가 무엇을 선택하였고 누가 이겼는지, 비겼는지를 출력



#include <stdio.h>
#include <stdlib.h> // srand(), rand()함수를 사용하기 위해 포함시킨 헤더파일
#include <time.h> // time()함수를 사용하기 위해 포함시킨 헤더파일


int main()
{
    int user;
    int computer;
    int range = 3;
    char winner = 0;

    // 현재 시각(time(NULL))을 시드로 사용하여 시작점을 매번 다르게 설정
    srand((unsigned int)time(NULL));
    //time(NULL) 현재 시간을 얻어서 srand() 함수에 시드 값을 전달하여 rand()함수가 시작될 때마다 다른 난수를 생성하게 만든다

    printf("(1:가위 2:바위 3:보) 중에서 하나를 선택하시오: ");
    scanf("%d", &user);

    computer = 1 + (rand() % range); // 난수를 range = 3으로 나누어 0,1,2 중의 값을 도출한 뒤에 1을 더해서 원하는 범위(1-3)의 난수를 구하기
    
    if (user != 1 && user != 2 && user != 3)
        printf("잘못된 입력입니다.\n");
    else {
        if (user == computer) {
           printf("비겼습니다.\n");
           winner = 'x';
        }
        else if (user == 1){
            printf("사용자 : 가위, ");
            if (computer == 3) {
                printf("컴퓨터 : 보\n");
                winner = 'u';
            }
            if (computer == 2) {
                printf("컴퓨터 : 바위\n");
                winner = 'c';
            }
        }
        else if (user == 2){
            printf("사용자 : 바위, ");
            if (computer == 1) {
                printf("컴퓨터 : 가위\n");
                winner = 'u';
            }
            if (computer == 3) {
                printf("컴퓨터 : 보\n");
                winner = 'c';
            }
        }
        else if (user == 3){
            printf("사용자 : 보, ");
            if (computer == 1) {
                printf("컴퓨터 : 가위\n");
                winner = 'c';
            }
            if (computer == 2) {
                printf("컴퓨터 : 바위\n");
                winner = 'u';
            }
        }

    }
    switch (winner) {
        case 'u' : printf("사용자가 이겼습니다.\n"); break;
        case 'c' : printf("컴퓨터가 이겼습니다."); break;
        case 'x' : break;
    }
    return 0;
}
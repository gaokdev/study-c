// 편의점에서 물건을 구입하고 만 원을 냈을 때, 거스름돈의 액수와 점원이 지급 해야 할 거스름돈을 계산하는 프로그램

// 1. 사용자로부터 물건 값을 입력 받는다. 물건 값은 100원 단위로 떨어진다고 가정한다
// 2. 투입한 금액을 입력한다
// 3. 점원이 내어주어야 할 천 원권, 오백 원짜리 동전, 백 원짜리 동전 개수를 출력한다

#include <stdio.h>

int main()
{
    int price, paid_money, change;
    int thousand, five_hundred, hundred;
    
    printf("물건 값을 입력하시오: ");
    scanf("%d", &price);

    printf("투입한 금액을 입력하시오: ");
    scanf("%d", &paid_money);

    change = paid_money - price;

    thousand = change / 1000; // 1000으로 나누어서 천원 권 개수 출력
    
    change = change % 1000; // 천원으로 거스름돈을 주는 금액을 빼기

    five_hundred = change / 500; // 500으로 나누어서 오백원 개수 출력

    change = change % 500; // 500원으로 거스름돈 주는 금액 빼기

    hundred = change / 100; // 100으로 나누어서 100원 개수 출력

    printf("거스름돈은 다음과 같습니다.\n");
    printf("천원권 : %d장\n", thousand);
    printf("오백원 동전 : %d개\n", five_hundred);
    printf("백원 동전 : %d개\n", hundred);

    return 0;

}
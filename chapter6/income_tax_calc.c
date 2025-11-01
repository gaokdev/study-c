// 다음과 같이 자신의 과세 표준을 입력하면 소득세가 계산되는 프로그램
/*
과세 표준: 35000000

소득세율: 15%
(공제전)소득세: 5250000
누진공제액: 1080000
산출세액: 4170000
*/
/*
과세표준 - 세율 - 누진공제
0 6% 0
12000000 15% 1080000
46000000 24% 5220000
88000000 35% 14900000
150000000 38% 19400000
300000000 40% 25400000
500000000 42% 35400000
1000000000 45% 65400000
*/
// 산출세액 = 과세표준 * 세율 - 누진공제액 = 3500000 * 15% - 1080000 = 4170000

#include <stdio.h>

int main()
{
    long long tax_base; // 과세표준이 int의 최대인 21억을 넘을 수 있으므로 long long으로 선언
    double tax_rate;
    int progressive_deduction_amount;
    int bracket = 0;
    int error_flag = 0;
    
    printf("과세표준: ");
    scanf("%lld", &tax_base);

    if (tax_base >= 0 && tax_base <= 12000000)
        bracket = 1;
    else if (tax_base <= 46000000)
        bracket = 2;
    else if (tax_base <= 88000000)
        bracket = 3;
    else if (tax_base <= 150000000)
        bracket = 4;
    else if (tax_base <= 300000000)
        bracket = 5;
    else if (tax_base <= 500000000)
        bracket = 6;
    else if (tax_base <= 1000000000)
        bracket = 7;
    else if (tax_base > 1000000000)
        bracket = 8;
    else {
        printf("올바르지 않은 과세표준 값 입니다.\n");
        error_flag = 1;
    }

    switch (bracket) {
        case 1:
            tax_rate = 0.06;
            progressive_deduction_amount = 0;
            break;
        case 2:
            tax_rate = 0.15;
            progressive_deduction_amount = 1080000;
            break;
        case 3:
            tax_rate = 0.24;
            progressive_deduction_amount = 5220000;
            break;
        case 4:
            tax_rate = 0.35;
            progressive_deduction_amount = 14900000;
            break;
        case 5:
            tax_rate = 0.38;
            progressive_deduction_amount = 19400000;
            break;
        case 6:
            tax_rate = 0.40;
            progressive_deduction_amount = 25400000;
            break;
        case 7:
            tax_rate = 0.42;
            progressive_deduction_amount = 35400000;
            break;
        case 8:
            tax_rate = 0.45;
            progressive_deduction_amount = 65400000;
            break;
    }
    
    if (error_flag != 1) {
        printf("소득세율: %.0f%%\n",tax_rate*100);
        printf("(공제전)소득세: %.0f\n", tax_base * tax_rate);
        printf("누진공제액: %d\n", progressive_deduction_amount);
        printf("산출세액: %.0f\n", tax_base * tax_rate - progressive_deduction_amount);
    }
    return 0;
}
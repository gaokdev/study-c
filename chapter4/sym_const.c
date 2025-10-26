// 기호상수 예제

#include <stdio.h>
#define TAX_RATE 0.2 // define으로 기호상수 정의. 세미콜론 안붙인다

int main()
{
    const int MONTHS = 12; // const를 붙여서 기호상수를 정의한다
    int m_salary, y_salary;

    printf("월급을 입력하시오: ");
    scanf("%d", &m_salary); 

    y_salary = MONTHS * m_salary; // 순수입 계산
    printf("연봉은 %d입니다.\n", y_salary);
    printf("세금은 %f입니다.\n", y_salary * TAX_RATE);

    return 0;
}
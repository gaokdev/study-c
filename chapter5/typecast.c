// 형변환 예제

#include <stdio.h>

int main()
{
    int i;
    double f;

    f = 5 / 4; // 5/4는 피연산자가 정수이므로 1이 되고 double형인 f에 대입되어 f의 값은 1.0이 된다
    printf("%.2f \n", f);

    f = (double)5 / 4; // typecast 연산자가 우선순위가 높기 때문에 형변환이 먼저 되고 5.0/4가 된다
    printf("%.2f \n", f);

    f = 5.0 / 4; // 피연산자 중 하나가 double형이므로 4도 double형으로 자동 형변환되고 5.0 / 4.0으로 계산된다   
    printf("%.2f \n", f);
    
    f = (double)5 / (double) 4; // 5.0 / 4.0과 같다
    printf("%.2f \n", f);

    i = 1.3 + 1.8; // 피연산자가 모두 부동소수점형이므로 수식의 결과는 3.1이 되지만 정수형 변수에 대입하여 i의 값은 3이 된다
    printf("%d \n", i);

    i = (int)1.3 + (int)1.8; // int형으로 형변환시켜서 1 + 1이 되고 i의 값은 2가 된다
    printf("%d \n", i);

    return 0;
}
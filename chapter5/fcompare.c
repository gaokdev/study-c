// 실수를 ==로 비교했을 때 원하는 결과가 나오지 않는 프로그램

#include <stdio.h>
#include <math.h> // fabs()함수를 사용하기 위해 포함시킨 헤더파일

int main()
{
    double a,b;
    a = (0.3 * 3) + 0.1;
    b = 1;

    printf("a==b의 결과: %d \n", a==b); // 정밀도 오차로 인하여 a와 b가 같지 않다고 출력된다
    printf("fabs(a-b)<0.0001의 결과: %d \n", fabs(a-b) < 0.0001); // 절댓값을 구하는 함수 fabs()를 사용해서 차이가 작다면 같다고 간주하는 것

    return 0;

}